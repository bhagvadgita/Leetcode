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
    int sumNumbers(TreeNode* root) {
        int ans = 0;
        int num = 0;
        dfs(root,ans,num);
        return ans;
    }
    void dfs(TreeNode* node,int& ans, int num){
        num = (10*num) + node->val;
        if (!node->left && !node->right){
            ans +=num;
            return;
        }
        if (node->left) dfs(node->left,ans,num);
        if (node->right) dfs(node->right,ans,num);
        return;
    }
};