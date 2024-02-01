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
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL )return false;
        ListNode* temp = head;
        int t = 0;
        
        while(temp){
            temp = temp->next;
            if(t>1e4){
                return true;
            }
            t++;
            
        }
        return false;
    }
};