#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string getHint(string secret, string guess) {
        vector<int> secret_nums(10, 0);
        vector<int> guess_nums(10, 0);
        int bulls_num = 0, cows_num = 0;

        for (int i = 0; i < secret.length(); ++i)
        {
            if (secret[i] == guess[i])
            {
                bulls_num++;
                continue;
            }
            secret_nums[secret[i] - '0']++;
            guess_nums[guess[i] - '0']++;
        }

        for (int i = 0; i < 10; ++i)
        {
            cows_num += min(secret_nums[i], guess_nums[i]);
        }

        return to_string(bulls_num) + "A" + to_string(cows_num) + "B";
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main()
{
    Solution solution;
    
    cout << "Code Charge!" << endl;
    return 0;
}