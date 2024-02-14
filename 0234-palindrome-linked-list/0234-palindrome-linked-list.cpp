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
        stack<int>st;
        if(head == NULL || head->next == NULL)return true;
        ListNode* temp = head;
        ListNode* t1 = head;
        int n = 0;
        while(temp){
            n++;
            temp = temp->next;
        }
        int p=n/2;
        while(p){
            st.push(t1->val);
            t1 = t1->next;
            p--;
        }
        p = n/2;
        if(n%2 == 0){
            while(p){
                if(t1->val!= st.top()){
                    return false;
                }
                t1 = t1->next;
                st.pop();
                p--;
            }
            
        }else{
            t1 = t1->next;
            while(p){
                if(t1->val!= st.top()){
                    return false;
                }
                t1 = t1->next;
                st.pop();
                p--;
            }
        }
        
        return true;
        
        
        
    }
};