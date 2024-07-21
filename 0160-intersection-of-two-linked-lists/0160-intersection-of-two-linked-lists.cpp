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
    int len(ListNode*head){
        ListNode*temp = head;
        int cnt = 0;
        
        while(temp){
            cnt++;
            temp = temp->next;
        }
        return cnt;
    }
    ListNode* f(ListNode* head1,ListNode*head2,int d){
        ListNode* temp1 = head1;
        ListNode*temp2 = head2;
        
        while(d){
            temp2 = temp2->next;
            d--;
        }
        
        while(temp1 != temp2){
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        
        return temp1;
    }
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
        int n1 = len(head1);
        int n2 = len(head2);
        
        if(n1>n2){
            return f(head2,head1,n1-n2);
        }else{
            return f(head1,head2,n2-n1);
        }
        
    }
};