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
    int maxAncestorDiff(TreeNode* root) {
        int ans=0;
        vector<int> arr;
        arr.push_back(root->val);
        solve(root,ans,arr);
        return ans;
    }
    void solve(TreeNode* root,int &ans, vector<int> &arr){
        if (!root){
            return;
        }
        if (root->left){
            arr.push_back(root->val);
            for (int i=0; i<arr.size();i++){
                int temp=abs(arr[i]-root->left->val);
                ans=max(temp,ans);
            }
            solve(root->left,ans,arr);
        }
        if (root->right){
            arr.push_back(root->val);
            for (int i=0;i<arr.size();i++){
                int temp=abs(arr[i]-root->right->val);
                ans=max(temp,ans);
            }
            solve(root->right,ans,arr);
        }
        arr.pop_back();
        return;
    }
};