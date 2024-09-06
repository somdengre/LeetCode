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
    ListNode* reverse(ListNode* head){
        if(head == NULL || head->next == NULL)return head;
        ListNode* newHead = reverse(head->next);
        ListNode* front = head->next;
        front->next = head;
        head->next = NULL;
        return newHead;
    }
    ListNode* findknode(ListNode* temp,int k){
        k-=1;
        while(temp && k){
            temp = temp->next;
            k--;
        }
        
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prevNode = NULL;
        while(temp){
            ListNode* kthnode = findknode(temp,k);
            if(kthnode == NULL){
                if(prevNode)prevNode->next = temp;
                break;
            }
            
            ListNode* nextNode = kthnode->next;
            kthnode->next = NULL;
            reverse(temp);
            if(temp == head){
                head = kthnode;
            }else{
                prevNode->next = kthnode;
            }
            prevNode = temp;
            temp = nextNode;
        }
        return head;
    }
};