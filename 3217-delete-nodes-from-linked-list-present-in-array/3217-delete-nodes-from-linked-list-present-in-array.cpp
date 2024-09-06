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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        set<int>st(nums.begin(),nums.end());
        ListNode* temp = head;
        
        while(temp && st.find(temp->val) != st.end()){
            temp = temp->next;
        }
        
        ListNode* newHead = temp;
        ListNode* curr = temp->next;
        
        while(curr){
            if(st.find(curr->val) != st.end()){
                temp->next = curr->next;
                curr = curr->next;
            }else{
                temp = curr;
                curr = curr->next;
            }
            
        }
        
        return newHead;
    }
};