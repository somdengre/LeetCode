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
        if(head->next->next == NULL){
            head->next = NULL;
            return head;
        }
        ListNode* temp = head;
        int n = 0;
        while(temp){
            n++;
            temp = temp->next;
        }
        
        int p = n/2;
        p = p-1;
        temp = head;
        while(p){
            temp = temp->next;
            p--;
        }
        
        temp->next = temp->next->next;
        
        return head;
    }
};