#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)

// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == NULL)
            return NULL;

        unordered_map<Node*, Node*> node_map;   // 存储旧节点和新节点相同索引的节点对

        /* 初始化第一个 */
        Node* copy_head = new Node(head->val);
        node_map[head] = copy_head;
        copy_head->random = head->random;   // 暂时指向旧节点的 random

        /* 临时变量 */
        Node* copy_cur,  *copy_last = copy_head, *cur = head->next;

        /* 创建链表并为 next 赋值 */
        while (cur != NULL)
        {
            copy_cur = new Node(cur->val);
            copy_cur->random = cur->random;
            copy_last->next = copy_cur;
            copy_last = copy_cur;

            node_map[cur] = copy_cur;
            cur = cur->next;
        }
        copy_last->next = NULL;

        copy_cur = copy_head;
        /* 为新链表的 random 重新赋值 */
        while (copy_cur != NULL)
        {
            if (copy_cur->random != NULL)
            {
                copy_cur->random = node_map.find(copy_cur->random)->second;
            }
            copy_cur = copy_cur->next;
        }

        return copy_head;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main()
{
    Solution solution;
    
    cout << "Code Charge!" << endl;
    return 0;
}