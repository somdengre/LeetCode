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
private: 
    int gcd(int a, int b){
        if(b==0){
            return a;
        }
        return gcd(b, a%b);
    }
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr=head->next;
        ListNode* prev=head;
        if(head==NULL){
            return NULL;
        }
        while(curr!=NULL){
            int node= gcd(prev->val, curr->val);
            ListNode* gcd= new ListNode(node);
            prev->next=gcd;
            gcd->next=curr;
            prev=curr;
            curr=curr->next;     
        }
        return head;
    }
};