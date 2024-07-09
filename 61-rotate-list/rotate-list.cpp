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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        
        // Count the number of nodes in the list
        int count = 0;
        ListNode *temp = head;
        while(temp) {
            count++;
            temp = temp->next;
        }
        
        // Calculate the effective rotations needed
        k = k % count;
        if(k == 0) {
            return head;
        }
        
        // Find the new head after rotations
        count -= k;
        ListNode *curr = head, *prev = NULL;
        while(count--) {
            prev = curr;
            curr = curr->next;
        }
        
        prev->next = NULL;
        ListNode *Tail = curr;
        
        // Find the tail of the rotated list
        while(Tail->next != NULL) {
            Tail = Tail->next;
        }
        
        // Connect the tail to the original head
        Tail->next = head;
        
        // Update head to the new head
        head = curr;
        
        return head;
    }
};