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

    bool check(TreeNode* root, TreeNode* subRoot){
        if ((!root && subRoot) || (root && !subRoot)){
            return false;
        }
        if (!root && !subRoot) return true;
        if (root->val!= subRoot->val) return false;
        if (check(root->left,subRoot->left) && check(root->right,subRoot->right) ) return true;
        return false;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (!root) return false;
        if (root->val==subRoot->val){
            if (check(root,subRoot)) return true;
        }
        if (isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot)) return true;
        return false;
    }
};