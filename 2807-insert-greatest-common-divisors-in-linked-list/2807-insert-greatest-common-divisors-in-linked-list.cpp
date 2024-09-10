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
    int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr = head->next;
        ListNode* temp = head;
        
        while(curr){
            ListNode* newNode = new ListNode(gcd(curr->val,temp->val));
            temp->next = newNode;
            newNode->next = curr;
            temp = curr;
            curr = curr->next;
        }
        
        return head;
    }
};