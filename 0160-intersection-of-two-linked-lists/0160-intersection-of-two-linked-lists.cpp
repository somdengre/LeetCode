/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL)return NULL;
        int n1 = 0;
        int n2 = 0;
        ListNode* temp1 = headA;
        
        while(temp1){
            n1++;
            temp1 = temp1->next;
        }
        
        temp1 = headB;
        while(temp1){
            n2++;
            temp1=temp1->next;
        }
        temp1 = headA;
        ListNode* temp2 = headB;
        if(n1>n2){
            for(int i = 0;i<n1-n2;i++){
                temp1 = temp1->next;
            }
        }else if(n2>n1){
             for(int i = 0;i<n2-n1;i++){
                temp2 = temp2->next;
            }
        }
        
        while(temp1 && temp2){
            if(temp1 == temp2){
                return temp1;
            }
            
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        
        return NULL;
    }
};