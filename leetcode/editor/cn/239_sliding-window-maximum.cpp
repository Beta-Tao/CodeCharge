#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class MaxQueue {
public:
    queue<int> raw_queue;
    deque<int> max_queue;

    MaxQueue() {

    }

    int max_value() {
        return max_queue.empty() ? -1 : max_queue.front();
    }

    void push_back(int value) {
        raw_queue.push(value);

        while (!max_queue.empty() && max_queue.back() < value)
        {
            max_queue.pop_back();
        }
        max_queue.push_back(value);
    }

    int pop_front() {
        if (raw_queue.empty())
            return -1;

        int tmp = raw_queue.front();
        raw_queue.pop();

        if (max_queue.front() == tmp)
            max_queue.pop_front();

        return tmp;
    }
};

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> result;
        result.reserve(nums.size() - k + 1);
        MaxQueue max_queue;
        for (int i = 0; i < k; i++)
            max_queue.push_back(nums[i]);
        result.push_back(max_queue.max_value());
        for (int i = 0; i < nums.size() - k; i++)
        {
            max_queue.pop_front();
            max_queue.push_back(nums[i + k]);
            result.push_back(max_queue.max_value());
        }
        return result;
    }
};

//leetcode submit region end(Prohibit modification and deletion)

int main(int argc, char **argv)
{
    cout << "Code Charge!!" << endl;
    return 0;
}