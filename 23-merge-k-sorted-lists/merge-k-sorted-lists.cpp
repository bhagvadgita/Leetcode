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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> arr;
        ListNode* temp(NULL);
        for (int i=0; i<lists.size(); i++){
            temp = lists[i];
            while (temp){
                arr.push_back(temp->val);
                temp = temp->next;
            }
        }
        if (arr.empty()) return nullptr;
        sort(arr.begin(),arr.end());
        ListNode* head = new ListNode(arr[0]);
        temp = head;
        for (int i=1; i<arr.size(); i++){
            ListNode* Node = new ListNode(arr[i]);
            temp->next = Node;
            temp = temp->next;
        }
        return head;
    }
};