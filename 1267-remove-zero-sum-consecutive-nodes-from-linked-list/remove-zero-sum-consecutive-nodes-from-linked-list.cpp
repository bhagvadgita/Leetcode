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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* root = new ListNode(0);
        root->next = head;
        unordered_map<int,ListNode*> ump;
        int ac = 0;
        ump[0]=root;
        while (head!=NULL){
            ac+=head->val;
            if (ump.find(ac)!=ump.end()){
                ListNode* prev = ump[ac];
                ListNode* start = prev;
                int aux = ac;
                while (prev!=head){
                    prev = prev->next;
                    aux+=prev->val;
                    if (prev!=head) ump.erase(aux);
                }
                start->next = head->next;
            }
            else{
                ump[ac] = head;
            }
            head = head->next;
        }
        return root->next;
    }
};