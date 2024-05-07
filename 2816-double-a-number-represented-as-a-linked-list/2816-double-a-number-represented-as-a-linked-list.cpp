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
    ListNode* doubleIt(ListNode* head) {
        ListNode *p = head;
        vector<int> ans;
        
        while(p){
            ans.push_back(p->val);
            p = p-> next;
        }
        
        reverse(ans.begin(), ans.end());
        int carry = 0;
        for(int i =0; i<ans.size();i++){
            int current = (ans[i]*2 + carry)%10;
            carry = (ans[i]*2 + carry)/10;
            ans[i] = current;
            
        }
        
        if(carry !=0){
            ans.push_back(carry);
        }
        ListNode *temp = new ListNode(-1);
        ListNode *toReturn = temp;
        for(int i = ans.size() - 1; i >= 0 ; i--){
            ListNode * curr = new ListNode(ans[i]);
            temp->next = curr;
            temp = temp->next;
        }
        return toReturn->next;
    }
};