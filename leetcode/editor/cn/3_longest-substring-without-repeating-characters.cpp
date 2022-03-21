#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.empty())
            return 0;

        int max_len = 0;
        unordered_set<char> char_set;
        queue<char> char_queue;
        for (const auto& c: s)
        {
            if (char_set.count(c))  // 存在相同
            {
                max_len = max(max_len, int(char_queue.size()));
                while (char_queue.front() != c)
                {
                    char_set.erase(char_queue.front());
                    char_queue.pop();
                }
                char_queue.pop();
            }
            char_set.insert(c);
            char_queue.push(c);
        }
        max_len = max(max_len, int(char_queue.size()));
        return max_len;
    }
};
//leetcode submit region end(Prohibit modification and deletion)

int main(int argc, char** argv)
{
    Solution solution;

    cout << solution.lengthOfLongestSubstring("dvdf") << endl;

//    cout << int(' ') << endl;

    return 0;
}