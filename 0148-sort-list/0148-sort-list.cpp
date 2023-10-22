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
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head -> next == NULL)return head;
        
        vector<int> temp;
        ListNode* curr = head;
        while(curr){
            temp.push_back(curr->val);
            curr = curr->next;
            
        }
        
        sort(temp.begin(), temp.end());
        int i = 0;
        curr = head;
        while(curr){
            curr->val = temp[i];
            curr = curr->next;
            i++;
        }
        
        return head;
    }
};