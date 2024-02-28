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
    int findBottomLeftValue(TreeNode* root) {
        int height = 0;
        int count = 0;
        int ans = 0;
        dfs(root,height,count,ans);
        return ans;
    }
    void dfs(TreeNode* node, int& height, int count, int& ans){
        if (!node){
            return;
        }
        count++;
        if (count>height){
            height = count;
            ans = node->val;
        }
        dfs(node->left,height,count,ans);
        dfs(node->right,height,count,ans);
        return;
    }
};