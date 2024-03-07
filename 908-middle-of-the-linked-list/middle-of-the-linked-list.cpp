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
    ListNode* middleNode(ListNode* head) {
        ListNode* current = head;
        int n = 0;
        while (current!=nullptr){
            n++;
            current = current->next;
        }
        current = head;
        int count = 0;
        n = (n/2) ;
        while (count<n){
            count++;
            current = current->next;
        }
        return current;
    }
};