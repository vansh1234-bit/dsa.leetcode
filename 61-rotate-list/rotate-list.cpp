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
        if (head == NULL || head->next == NULL || k == 0)
            return head;

        // Find length and tail
        int count = 1;
        ListNode* tail = head;

        while (tail->next != NULL) {
            tail = tail->next;
            count++;
        }

        // Avoid unnecessary rotations
        k = k % count;

        if (k == 0)
            return head;

        // Make circular
        tail->next = head;

        // Find new tail
        int steps = count - k;
        ListNode* newTail = head;

        for (int i = 1; i < steps; i++) {
            newTail = newTail->next;
        }

        // New head is after new tail
        ListNode* newHead = newTail->next;

        // Break the circle
        newTail->next = NULL;

        return newHead;
    }
};