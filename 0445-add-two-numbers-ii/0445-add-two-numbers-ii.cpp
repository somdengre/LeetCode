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
    ListNode* addTwoNumbers(ListNode* p, ListNode* q) {
        stack<int> s1,s2;
        while(p){
            s1.push(p->val);
            p = p->next;
        }
        while(q){
            s2.push(q->val);
            q = q->next;
        }
        
        int c = 0;
        ListNode* head = nullptr;
        while(!s1.empty() || !s2.empty() || c != 0){
            int sum = c;
            if(!s1.empty()){
                sum +=s1.top();
                s1.pop();
            }
            if (!s2.empty()) {
                sum += s2.top();
                s2.pop();
            }
            
            ListNode* temp = new ListNode(sum%10);
            temp -> next = head;
            head = temp;
            c = sum/10;
            
            
        }
        
        return head;
        
    }
};







// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         stack<int> s1, s2;
//         s1 = helper(l1); // Convert l1 to stack
//         s2 = helper(l2); // Convert l2 to stack

//         int carry = 0;
//         ListNode* head = nullptr;

//         while (!s1.empty() || !s2.empty() || carry != 0) {
//             int sum = carry;

//             // Pop digits from stack s1 if not empty
//             if (!s1.empty()) {
//                 sum += s1.top();
//                 s1.pop();
//             }

//             // Pop digits from stack s2 if not empty
//             if (!s2.empty()) {
//                 sum += s2.top();
//                 s2.pop();
//             }

//             // Create a new node with the digit as sum % 10
//             ListNode* temp = new ListNode(sum % 10);

//             // Update the next pointer of the new node to the current head
//             temp->next = head;

//             // Update the head to the new node
//             head = temp;

//             // Update the carry for the next iteration
//             carry = sum / 10;
//         }

//         return head;
//     }
// };
