#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int ans;

    int findTilt(TreeNode* root) {
        dfs(root);
        return ans;
    }

    int dfs(TreeNode *node)
    {
        if (node == nullptr)
            return 0;
        int sum_left = dfs(node->left);
        int sum_right = dfs(node->right);
        ans += abs(sum_left - sum_right);
        return sum_left + sum_right + node->val;
    }
};
//leetcode submit region end(Prohibit modification and deletion)

int main(int argc, char **argv)
{
    cout << "Code Charge!!" << endl;
    return 0;
}