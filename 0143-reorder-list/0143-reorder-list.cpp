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
    void reorderList(ListNode* head) {
        int z = 0;
        ListNode* dummy = head;
        stack<ListNode *> s;
        
        while(dummy != NULL){
            z++;
            s.push(dummy);
            dummy = dummy -> next;
            
        }
        
        dummy = head;
        
        for(int i=0;i<z/2;i++){
            ListNode* temp = dummy->next;
            dummy -> next = s.top();
            s.pop();
            dummy = dummy->next;
            dummy->next = temp;
            dummy = temp;
        }
        
        dummy->next = NULL;
    }
};