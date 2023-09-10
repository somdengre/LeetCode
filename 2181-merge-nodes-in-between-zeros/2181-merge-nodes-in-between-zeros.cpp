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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *p = head;
        ListNode *z = head;
        ListNode *q = head-> next;
        int s = 0;
        while(q){
            while(q->val!=0){
                s+= q->val;
                q = q->next;
            }
            q= q->next;
            
            p->val = s;
            s=0;
            z=p;
            p = p-> next;
        }
        
        z->next = NULL;
        
        return head;
    }
};