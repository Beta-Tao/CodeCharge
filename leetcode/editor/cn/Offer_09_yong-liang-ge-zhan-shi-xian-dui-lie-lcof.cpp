#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class CQueue {
public:
    CQueue() {

    }

    stack<int> stack_in;
    stack<int> stack_out;

    int appendTail(int value) {
        if (!stack_out.empty())
        {
            while (!stack_out.empty())
            {
                stack_in.push(stack_out.top());
                stack_out.pop();
            }
        }
        stack_in.push(value);
        return -1;
    }

    int deleteHead() {
        if (stack_in.empty() && stack_out.empty())
        {
            return -1;
        }

        if (!stack_in.empty())
        {
            while (!stack_in.empty())
            {
                stack_out.push(stack_in.top());
                stack_in.pop();
            }
        }

        int tmp = stack_out.top();
        stack_out.pop();
        return tmp;
    }
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */
//leetcode submit region end(Prohibit modification and deletion)


int main()
{
    CQueue queue;
    
    cout << queue.appendTail(5) << endl;
    cout << queue.appendTail(2) << endl;
    cout << queue.deleteHead() << endl;
    cout << queue.deleteHead() << endl;
    return 0;
}