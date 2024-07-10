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
// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         int count = 0;
//         ListNode*temp = head;
//         while(temp){
//             count ++;
//             temp = temp->next;
//         }
//         count  = n;
//         if(count == 0){
//             temp = head;
//             head = head->next;
//             delete temp;
//             return head;
//         }

//         ListNode *curr = head, *prev = NULL;

//         while(count--){
//             prev = curr;
//            curr = curr->next;
//         }
//             prev->next = curr->next;
//             delete curr;
//             return head;
//     }
// };


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Calculate the total length of the list
        int length = 0;
        ListNode* temp = head;
        while (temp) {
            length++;
            temp = temp->next;
        }
        
        // Find the position to remove from the start
        int pos = length - n;
        
        // If the position is 0, remove the head node
        if (pos == 0) {
            temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        
        // Traverse to the node just before the target node
        ListNode* curr = head;
        for (int i = 0; i < pos - 1; ++i) {
            curr = curr->next;
        }
        
        // Remove the target node
        ListNode* target = curr->next;
        curr->next = target->next;
        delete target;
        
        return head;
    }
};
      

