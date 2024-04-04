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
    void reorderList(ListNode* head) {
        if (!head || !head->next) return;
        vector<ListNode*> arr;
        ListNode* curr = head;
        while (curr){
            arr.push_back(curr);
            curr = curr->next;
        }
        int i = 0;
        int j = arr.size()-1;
        while (i<j){
            arr[i]->next = arr[j];
            i++;
            if (i==j) break;
            arr[j]->next = arr[i];
            j--; 
        }
        arr[j]->next = nullptr;
    }
};