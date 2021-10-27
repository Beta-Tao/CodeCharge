#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /* 暴力解法 */
//        vector<int> result;
//
//        for (int i = 0; i < nums.size(); ++i)
//        {
//            for (int j = i + 1; j < nums.size(); ++j)
//            {
//                if (nums[i] + nums[j] == target)
//                {
//                    result.push_back(i);
//                    result.push_back(j);
//                    return result;
//                }
//            }
//        }
//        return result;

        /* hash table */
        unordered_map<int, int> hash_table;     // [数字， 数字下标]
        for (int i = 0; i < nums.size(); ++i)
        {
            auto result = hash_table.find(target - nums[i]);
            if (result != hash_table.end())     // 找到结果
            {
                return {result->second, i};
            }
            hash_table[nums[i]] = i;
        }
        return {};
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main()
{
    Solution s;

    vector<int> result;

    vector<int> nums_1{2, 7, 11, 15};
    result = s.twoSum(nums_1, 9);
    cout << "[" << result[0] << "," << result[1] << "]" << endl;

    vector<int> nums_2{3, 2, 4};
    result = s.twoSum(nums_2, 6);
    cout << "[" << result[0] << "," << result[1] << "]" << endl;

    vector<int> nums_3{3, 3};
    result = s.twoSum(nums_3, 6);
    cout << "[" << result[0] << "," << result[1] << "]" << endl;
    
    cout << "Code Charge!" << endl;
    return 0;
}