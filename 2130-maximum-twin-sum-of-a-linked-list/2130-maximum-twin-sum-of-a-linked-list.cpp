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
    int pairSum(ListNode* head) {
        ListNode *p=head;
        ListNode *q=head;
        stack<int> sp;
        int sum = INT_MIN;
        
        while(q){
            sp.push(p->val);
            p = p->next;
            q = q->next->next;
        }
        
        while(p){
            int t = sp.top()+p->val;
            sum = max(sum,t);
            sp.pop();
            p = p->next;
        }
        return sum;
    }
};



