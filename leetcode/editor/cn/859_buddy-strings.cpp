#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if (s.length() != goal.length())
            return false;

        if (s == goal)
        {
            unordered_map<char, int> goal_map;
            for (auto &c : goal)
            {
                goal_map[c]++;
                if (goal_map[c] != 1)
                    return true;
            }
            return false;
        }
        else
        {
            vector<int> diff_num;
            for (int i = 0; i < s.length(); i++)
            {
                if (s[i] != goal[i])
                {
                    diff_num.push_back(i);      // 此处只需要存储索引即可
                    if (diff_num.size() > 2)
                        return false;
                }
            }
            if (diff_num.size() != 2)
                return false;
            else
            {
                if (s[diff_num[0]] == goal[diff_num[1]] && s[diff_num[1]] == goal[diff_num[0]])
                    return true;
                else
                    return false;
            }
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)

int main(int argc, char **argv)
{
    cout << "Code Charge!!" << endl;
    return 0;
}