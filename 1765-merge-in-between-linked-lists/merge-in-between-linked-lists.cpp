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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* left=list1;
        ListNode* right = list1;
        while (a>1){
            left = left->next;
            right = right->next;
            a--;
            b--;
        }
        while (b>=1){
            right = right->next;
            b--;
        }
        left->next=list2;
        ListNode* hi = list2;
        while (hi->next!=nullptr){
            hi=hi->next;
        }
        hi->next=right->next;
        return list1;
    }
};