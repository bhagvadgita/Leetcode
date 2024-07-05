/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* curr = head;
        vector<int> ans = {INT_MAX,INT_MIN};
        vector<int> crit_pts;
        int i = 2;
        while (curr->next->next){
            if (curr->next->val<curr->val && curr->next->next->val>curr->next->val) crit_pts.push_back(i);
            if (curr->next->val>curr->val && curr->next->next->val<curr->next->val) crit_pts.push_back(i);
            i++;
            curr = curr->next;
        }
        if (crit_pts.size()<2) return {-1,-1};
        for (int i = 0; i<crit_pts.size()-1; i++){
            int diff = crit_pts[i+1]-crit_pts[i];
            ans[0] = min(ans[0],diff);
        }
        ans[1] = crit_pts[crit_pts.size()-1] - crit_pts[0];
        return ans;
    }
};