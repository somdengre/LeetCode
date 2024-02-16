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
        ListNode* dummy = new ListNode(-1);
        ListNode* curr = dummy;
        ListNode* t1 = l1;
        ListNode*t2 = l2;
        int c = 0;
        while(t1 || t2){
            int s = c;
            if(t1)s+=t1->val;
            if(t2)s+=t2->val;
            ListNode* newNode = new ListNode(s%10);
            c = s/10;
            curr->next = newNode;
            curr = curr->next;
            if(t1) t1 = t1->next;
            if(t2) t2 = t2->next;
            
        }
        if(c == 1){
             ListNode* newNode = new ListNode(c);
            curr->next = newNode;
        }
        return dummy->next;
    }
};