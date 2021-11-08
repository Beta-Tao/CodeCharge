#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
const unordered_set<char> keys[] = {
        {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'},
        {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'},
        {'z', 'x', 'c', 'v', 'b', 'n', 'm'}
};

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> result;
        for (auto& word : words)
        {
            int key_index;
            /* 查找每个单词的第一个字符对应的键盘行号 */
            for (key_index = 0; key_index < 3; key_index++)
            {
                auto flag = word[0] < 'a' ? keys[key_index].find(word[0] + 32) :
                            keys[key_index].find(word[0]);
                if (flag != keys[key_index].end())
                    break;
            }
            /* 在第一个单词所在 key_index 中查找之后元素 */
            int char_index;
            for (char_index = 1; char_index < word.size(); char_index++)
            {
                auto flag = word[char_index] < 'a' ? keys[key_index].find(word[char_index] + 32) :
                            keys[key_index].find(word[char_index]);
                if (flag == keys[key_index].end())
                    break;
            }
            /* 如果全部字符搜索完毕，则说明全部字符都在该行中 */
            if (char_index == word.size())
            {
                result.push_back(word);
            }
        }
        return result;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main()
{
    Solution solution;
    vector<string> words = {"Alaska", "Dad", "Peace"};

    vector<string> result = solution.findWords(words);
    for (auto& i : result)
    {
        cout << i << endl;
    }
    
    cout << "Code Charge!" << endl;
    return 0;
}