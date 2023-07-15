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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next == NULL){
            return NULL;
        }
        ListNode *temp = head;
        ListNode *prev = head;
        
        int c=0;
        while(temp != NULL){
            temp = temp -> next;
            c++;
        }
        c/=2;
        
        while(c!=1){
            prev = prev->next;
            c--;
        }
        
        prev -> next = prev ->next->next;
        
        return head;
    }
};