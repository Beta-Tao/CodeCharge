#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxProduct(vector<string>& words) {
        unordered_map<int, int> map;
        int length = int(words.size());
        for (int i = 0; i < length; i++)
        {
            int mask = 0;
            string word = words[i];
            int word_length = int(word.length());
            for (int j = 0; j < word_length; j++)
                mask |= 1 << (word[j] - 'a');
            if (map.count(mask))
            {
                if (word_length > map[mask])    // 长度大于该掩码对应长度
                    map[mask] = word_length;
            }
            else    // 不存在此掩码
                map[mask] = word_length;
        }
        int max_prod = 0;
        for (auto [mask_1, _] : map)
        {
            int word_length_1 = map[mask_1];
            for (auto [mask_2, _] : map)
            {
                if ((mask_1 & mask_2) == 0)
                {
                    int word_length_2 = map[mask_2];
                    max_prod = max(max_prod, word_length_1 * word_length_2);
                }
            }
        }
        return max_prod;
    }
};
//leetcode submit region end(Prohibit modification and deletion)

int main(int argc, char **argv)
{
    cout << "Code Charge!!" << endl;
    return 0;
}