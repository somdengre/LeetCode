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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if(head ->next->next == NULL)return {-1,-1};
        int mini = INT_MAX;
        int maxi = INT_MIN;
        int cnt = 0;
        vector<int>temp;
        ListNode* curr = head->next;
        ListNode*prev = head;
        ListNode*then = curr->next;
        int dist = 0;
        
        while(then){
            dist++;
            if((curr->val>prev->val&&curr->val>then->val)||(curr->val < prev->val && curr->val < then->val )){
                cnt++;
                temp.push_back(dist);
            }
            prev = curr;
            curr = then;
            then = then->next;
            
        }
        
        if(cnt<2)return {-1,-1};
        maxi = temp[temp.size()-1] - temp[0];
        for (int i = 1; i < temp.size(); i++) {
            mini = min(mini, temp[i] - temp[i - 1]);
        }
        
        return {mini,maxi};
    }
};