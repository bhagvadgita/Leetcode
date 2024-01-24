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
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int> arr(10,0);
        int count=0;
        dfs(root,arr,count);
        return count;
    }
    void dfs(TreeNode* root, vector<int>& arr, int& count){
        arr[root->val]++;
        if (!root->left && !root->right){
            if (check(arr)) count++;
        }
        if (root->left){
            dfs(root->left, arr, count);
        }
        if (root->right){
            dfs(root->right, arr, count);
            arr[root->val]--;
            return;
        }
        arr[root->val]--;
        return;
    }
    bool check(vector<int> arr){
        int can=0;
        for (int i=1; i<10; i++){
            if (arr[i]%2==1){
                can++;
            }
        }
        if (can<=1){
            return true;
        }
        else{
            return false;
        }
    }
};