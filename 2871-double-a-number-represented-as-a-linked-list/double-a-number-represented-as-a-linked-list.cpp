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
    ListNode* doubleIt(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        while (curr){
            ListNode* Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        curr = prev;
        int carry = 0;
        while (curr){
            int num = curr->val;
            num = num*2+carry;
            carry = num/10;
            num = num%10;
            curr->val = num;
            curr = curr->next;
        }
        if (carry>0){
            ListNode* Node = new ListNode(carry);
            head->next = Node;
        }
        curr = prev;
        prev = NULL;
        while (curr){
            ListNode* Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
    }
};