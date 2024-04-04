
class Solution {
public:
    void reorderList(ListNode* head) {
        if (!head || !head->next) return;
        ListNode* slow = head;
        ListNode* fast = head->next;
        while (fast){
            fast = fast->next;
            if (fast){
                fast = fast->next;
                slow = slow->next;
            }
        }
        ListNode* mid = slow->next;
        slow->next = NULL;
        mid = reverseList(mid);
        slow = head;
        while (mid){
            ListNode* Next = slow->next;
            ListNode* mid_next = mid->next;
            slow->next = mid;
            mid->next = Next;
            slow = Next;
            mid = mid_next;
        }
    }
    ListNode* reverseList(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        while (curr){
            ListNode* Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
    }
};