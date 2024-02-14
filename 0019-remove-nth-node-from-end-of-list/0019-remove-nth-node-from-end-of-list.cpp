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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == NULL)return NULL;
        int z = 0;
        ListNode* temp = head;
        while(temp){
            z++;
            temp = temp->next;
        }
        temp = head;
        if(n == 1){
            while(temp->next->next !=  NULL){
                temp = temp->next;
            }
            temp->next = NULL;
        }else if(n == z){
            head = head->next;
            
        }else{
            n = z-n+1;
        
            while(n-2){
                temp = temp->next;
                n--;
            }
        
            temp->next = temp->next->next;
        }
        
        
        return head;
    }
};