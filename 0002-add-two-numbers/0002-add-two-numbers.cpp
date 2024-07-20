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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* dummy = new ListNode(-1);
        ListNode* cur = dummy;
        while(temp1 || temp2){
            int sum = carry;
            if(temp1)sum+=temp1->val;
            if(temp2)sum+=temp2->val;
            carry = sum/10;
            ListNode* node = new ListNode(sum%10);
            cur->next = node;
            cur = cur->next;
            if(temp1)temp1 = temp1->next;
            if(temp2)temp2 = temp2->next;
        }
        
        if(carry){
            ListNode* node = new ListNode(carry);
            cur->next = node;
            cur = cur->next;
            cur->next = NULL;
        }
        return dummy->next;
    }
};