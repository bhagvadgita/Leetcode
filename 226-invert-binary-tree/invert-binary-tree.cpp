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

    void dfs(TreeNode* root, TreeNode* newRoot){
        if (!root) return;
        TreeNode* left = new TreeNode();
        TreeNode* right = new TreeNode();
        if (root->left){
            right->val = root->left->val;
            newRoot->right = right;
            dfs(root->left,newRoot->right);
        }
        if (root->right){
            left->val = root->right->val;
            newRoot->left = left;
            dfs(root->right,newRoot->left);
        }
        return;
    }

    TreeNode* invertTree(TreeNode* root) {
        if (!root) return root;
        TreeNode* newRoot = new TreeNode(root->val);
        dfs(root,newRoot);
        return newRoot;
    }
};