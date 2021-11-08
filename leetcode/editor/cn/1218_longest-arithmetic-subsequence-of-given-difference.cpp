#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        vector<int> diff;
        for (int i = 0; i < arr.size() - 1; ++i)
        {
            diff.push_back(arr[i + 1] - arr[i]);
        }

        int max_diff = 1, cur_diff = 1;
        for (int i = 0; i < diff.size(); ++i)
        {
            int sum = 0;
            for (int j = i; j < diff.size(); ++j)
            {
                sum += diff[j];
                if (sum == difference)
                {
                    cur_diff++;
                    sum = 0;
                }
            }
            max_diff = max(max_diff, cur_diff);
            cur_diff = 1;
        }
        return max_diff;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main()
{
    Solution solution;

    vector<int> arr{3, 0, -3, 4, -4, 7, 6};
    solution.longestSubsequence(arr, 3);

    cout << "Code Charge!" << endl;
    return 0;
}