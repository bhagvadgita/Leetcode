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
        stack<ListNode*> st;
        ListNode* curr = head;
        while (curr){
            st.push(curr);
            curr = curr->next;
        }
        curr = head;
        unordered_map<ListNode*,bool> vis;
        while (curr){
            ListNode* last = st.top();
            st.pop();
            ListNode* Next = curr->next;
            if (vis[last]){
                curr->next = NULL;
                break;
            }
            curr->next = last;
            vis[last] = true;
            curr = curr->next;
            if (vis[Next]){
                curr->next = NULL;
                break;
            }
            curr->next = Next;
            curr = curr->next;
        }
    }
};