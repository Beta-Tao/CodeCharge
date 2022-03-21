#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    Solution(vector<int>& nums) {
        orig_nums = nums;
        shuffle_nums.resize(nums.size());
        copy(nums.begin(), nums.end(), shuffle_nums.begin());
    }
    
    vector<int> reset() {
        copy(orig_nums.begin(), orig_nums.end(), shuffle_nums.begin());
        return shuffle_nums;
    }
    
    vector<int> shuffle() {
        for (int i = 0; i < shuffle_nums.size(); i++)
        {
            int j = i + rand() % (shuffle_nums.size() - i);
            swap(shuffle_nums[i], shuffle_nums[j]);
        }
        return shuffle_nums;
    }

private:
    vector<int> shuffle_nums;
    vector<int> orig_nums;
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
//leetcode submit region end(Prohibit modification and deletion)

int main(int argc, char **argv)
{
    cout << "Code Charge!!" << endl;
    return 0;
}