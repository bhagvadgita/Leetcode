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
    bool isEvenOddTree(TreeNode* root) {
        if (!root) return true;
        queue<TreeNode*> q;
        bool flag = true;
        q.push(root);
        while(!q.empty()){
            int prev = flag?INT_MIN:INT_MAX;
            int x = q.size();
            for (int i=0; i<x; i++){
                TreeNode* front = q.front();
                q.pop();
                if (flag){
                    if (front->val%2==0 || front->val<=prev) return false;
                }
                else{
                    if (front->val%2!=0 || front->val>=prev) return false;
                }
                if (front->left) q.push(front->left);
                if (front->right) q.push(front->right);
                prev = front->val;
            }
            flag = !flag;
        }
        return true;
    }
};