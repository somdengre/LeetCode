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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *ptr1 = list1,*ptr2 = list1, *end = list2;
            
        for(int i=0;i<=b;i++){
            if(i<a-1)
                ptr1= ptr1->next;
            ptr2=ptr2->next;
        }
        while(end->next!=NULL){
            end = end->next;
        }
        ptr1->next = list2;
        
        end->next = ptr2;
        
        return list1;
    }
};