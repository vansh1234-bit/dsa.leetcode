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
    ListNode* reverseKGroup(ListNode* head, int k) {

        if (head == NULL || k == 1)
            return head;

        // Count total nodes
        int count = 0;
        ListNode* t = head;

        while (t != NULL) {
            count++;
            t = t->next;
        }

        int groups = count / k;

        ListNode* temp = head;
        ListNode* newHead = NULL;
        ListNode* previousGroupTail = NULL;

        // Process every complete group
        for (int j = 0; j < groups; j++) {

            // First node of current group
            ListNode* groupStart = temp;

            // Reverse k nodes
            ListNode* p = NULL;

            for (int i = 0; i < k; i++) {
                ListNode* next = temp->next;

                temp->next = p;
                p = temp;
                temp = next;
            }

            // First reversed group becomes the new head
            if (newHead == NULL) {
                newHead = p;
            }

            // Connect previous group to current group
            if (previousGroupTail != NULL) {
                previousGroupTail->next = p;
            }

            // groupStart is now the tail of current reversed group
            previousGroupTail = groupStart;

            // Connect current group to remaining nodes
            previousGroupTail->next = temp;
        }

        return newHead;
    }
};