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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (!list1) return list2;
        if (!list2) return list1;
        if (list1->val>list2->val) return mergeTwoLists(list2,list1);
        ListNode* curr1 = list1;
        ListNode* curr2 = list2;
        while (curr1 && curr2){
            ListNode* next = curr1->next;
            if (!next) {
                curr1->next = curr2;
                break;
            }
            if (next->val > curr2->val){
                curr1->next = curr2;
                ListNode* temp = curr2->next;
                curr2->next = next;
                curr1 = curr1->next;
                curr2 = temp;
            }
            else{
                curr1 = next;
            }
        }
        return list1;
    }
};