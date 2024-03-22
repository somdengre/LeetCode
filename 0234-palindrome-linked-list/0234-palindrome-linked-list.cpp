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
    bool isPalindrome(ListNode* head) {
         ListNode *p = head;
        stack<int> sq;
        stack<int> sp;
        int r;
        
        while( p){
            sq.push(p->val);
            p = p->next;
        }
        
        r= sq.size();
        
        if(r%2==0){
            r=r/2;
            while(r){
                sp.push(sq.top());
                sq.pop();
                r--;
            }
        }else{
            r=r/2;
            while(r){
                sp.push(sq.top());
                sq.pop();
                r--;
            }
            sp.push(sq.top());
            
        }
        
        if(sq==sp){
            return true;
        }
        else{
            return false;
        }
        
    }
};