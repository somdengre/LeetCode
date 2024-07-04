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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head->next;
        head = head->next;
        while(temp){
            int data = 0;
            ListNode* cur = temp;
            while(cur && cur->val != 0){
                data+=cur->val;
                cur = cur->next;
            }
            temp->val = data;
            cur = cur->next;
            temp->next = cur;
            temp = temp->next;
        }
        return head;
    }
};