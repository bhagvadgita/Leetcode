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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* new_head = new ListNode();
        ListNode* new_curr = new_head;
        int sum = 0;
        ListNode* curr = head->next;
        while (curr){
            if (curr->val!=0){
                sum+=curr->val;
            }
            else{
                ListNode* Node = new ListNode(sum);
                new_curr->next = Node;
                new_curr = new_curr->next;
                sum = 0;
            }
            curr = curr->next;
        }
        return new_head->next;
    }
};