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

/**
 * Your MaxQueue object will be instantiated and called as such:
 * MaxQueue* obj = new MaxQueue();
 * int param_1 = obj->max_value();
 * obj->push_back(value);
 * int param_3 = obj->pop_front();
 */
//leetcode submit region end(Prohibit modification and deletion)

int main()
{
//    Solution solution;
    
    cout << "Code Charge!" << endl;
    return 0;
}