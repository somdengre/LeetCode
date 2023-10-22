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
    ListNode* swapNodes(ListNode* head, int k) {
        int c =0;
        ListNode* temp = head;
        ListNode* back = head;
        while(temp){
            c++;
            temp  = temp -> next;
        }
        
        temp = head;
        
        int z = c-k+1;
        
        while(k>1){
            temp = temp -> next; 
            k--;
        }
        
        while(z>1){
            back = back -> next;
            z--;
        }
        
        swap(temp->val, back->val);
        
        return head;
        
        
        
    }
};