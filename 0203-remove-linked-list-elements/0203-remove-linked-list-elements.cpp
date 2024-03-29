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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL) return NULL;
        
        // head->next=removeElements(head->next, val);
        if(head->val == val) {
            return removeElements(head->next, val);
        }
        head->next = removeElements(head->next, val);
        return head;
    }
};

// class Solution {
// public:
//     ListNode* removeElements(ListNode* head, int val) {
//         //base case 
//         while(head != NULL && head->val == val) {
//             head = head->next;
//         }
//         if(head == NULL)
//         return NULL;
        
//         ListNode* temp = head;
        
//         while(temp->next!=NULL){
//             if(temp->next->val == val){
//               temp->next = temp->next->next;  
//             }
//             else
//             temp=temp->next;

//         }
//         return head;
//     }
// };