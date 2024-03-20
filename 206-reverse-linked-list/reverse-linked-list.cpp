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
    ListNode* reverseList(ListNode* head) {
        if (!head || !head->next) return head;
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* tail;
        curr = reversing(prev,curr,tail);
        curr->next = prev;
        return tail;
    }
    ListNode* reversing(ListNode*& prev, ListNode*& curr, ListNode*& tail){
        if (!curr){
            tail = prev;
            return prev;
        }
        ListNode* temp = reversing(curr,curr->next,tail);
        temp->next = curr;
        return curr;
    }
};