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
    ListNode* removeNodes(ListNode* head) {
        if(head -> next == NULL){
            return head;
        }
        stack<ListNode*>st;
        ListNode* temp = head->next;
        st.push(head);
        while(temp){
            if(st.empty() || temp->val < st.top()->val){
                st.push(temp);
            }else{
                while(!st.empty() && !(temp->val <= st.top()->val)){
                    st.pop();
                }
                st.push(temp);
            }
            temp = temp->next;   
        }
        if(st.size() == 0)return NULL;
        stack<ListNode*>st2;
        while(!st.empty()){
            st2.push(st.top());
            st.pop();
        }
        temp = st2.top();
        head = st2.top();
        st2.pop();
        while(!st2.empty()){
            temp->next = st2.top();
            st2.pop();
            temp = temp->next;
        }
        
        temp->next = NULL;
        return head;
    }
};