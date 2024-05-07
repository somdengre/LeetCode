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
        vector<int>v;
        ListNode* p = head;
        
        while(p){
            v.push_back(p->val);
            p = p->next;
        }
        reverse(v.begin(),v.end());
        
        int carry = 0;
        for(int i = 0;i<v.size();i++){
            int temp = (v[i]*2+carry)%10;
            carry = (v[i]*2+carry)/10;
            v[i] = temp;
        }
        
        if(carry){
            v.push_back(carry);
        }
        ListNode *temp = new ListNode(-1);
        ListNode *toReturn = temp;
        for(int i = v.size() - 1; i >= 0 ; i--){
            ListNode * curr = new ListNode(v[i]);
            temp->next = curr;
            temp = temp->next;
        }
        return toReturn->next;
    }
};