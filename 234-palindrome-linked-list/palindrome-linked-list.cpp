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
    bool isPalindrome(ListNode* head) {
        if (!head->next) return true;
        ListNode* fast = head;
        ListNode* slow = head;
        while (fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        ListNode* mid = reverse(slow);
        while (mid){
            if (mid->val!=head->val) return false;
            mid=mid->next;
            head = head->next;
        }
        return true;
    }
    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        while (curr){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};