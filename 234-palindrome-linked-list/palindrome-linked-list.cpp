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
//     bool isPalindrome(ListNode* head) {
//         int count  = 0; 
//         ListNode *temp = head;
//         while(temp){
//             count++;
//             temp = temp->next;
//         }
//         count /=2;
//         ListNode *curr = head, *prev = NULL;
//         while(count--){
//             prev = curr;
//             curr = curr->next;
//         }
//             prev->next = NULL;
//             ListNode *front;
//             prev = NULL;
//             while(curr){
//                 front = curr->next;
//                 curr->next = prev;
//                 prev = curr;
//                 curr = front;
            
//             ListNode *head1 = head, *head2 = prev;
//             while(head1){
//                 if(head1->val != head2->val){
//                     return 0;
//                     head1 = head1->next;
//                     head2 = head2->next;
//                 }
//             }
//             }
//             return 1;

        
        
        
        
//     }
// };
bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true; // Edge case: empty list or single node list

        // Find the middle of the linked list
        ListNode *slow = head, *fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reverse the second half of the linked list
        ListNode *prev = NULL, *curr = slow, *next;
        while (curr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        // Compare the first half and the reversed second half
        ListNode *head1 = head, *head2 = prev;
        while (head2) { // Only need to check head2 because it's the shorter half
            if (head1->val != head2->val) {
                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }

        return true;
    }

};

// Function to create a new node
ListNode* createNode(int val) {
    ListNode* newNode = new ListNode(val);
    newNode->next = NULL;
    return newNode;
}