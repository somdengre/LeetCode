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
    ListNode* removeZeroSumSublists(ListNode* head) {
        map<int,ListNode*>mp;
        int pre = 0;
        ListNode* dummy = new ListNode(0,head);
        ListNode* temp = dummy;
        
        while(temp){
            pre+=temp->val;
            mp[pre] = temp;
            temp = temp->next;
        }
        pre = 0;
        temp = dummy;
        
        while(temp){
            pre+=temp->val;
            temp->next = mp[pre]->next;
            temp = temp->next;
        }
        
        return dummy->next;
    }
};