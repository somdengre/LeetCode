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
    void deleteNode(ListNode* node) {
        while(node->next){
            ListNode* temp = node->next;
            swap(temp->val,node->val);
            if(temp->next){
                node = temp;
            }else{
                break;
            }
        }
        node->next = NULL;
    }
};