class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* temp1 = l1;
        ListNode* temp2 = l2;

        ListNode* newlist = new ListNode(0);
        ListNode* curr = newlist;

        int count = 0;

        while (temp1 != NULL || temp2 != NULL) {

            int sum = count;

            if (temp1 != NULL) {
                sum += temp1->val;
                temp1 = temp1->next;
            }

            if (temp2 != NULL) {
                sum += temp2->val;
                temp2 = temp2->next;
            }

            count = sum / 10;
            sum = sum % 10;

            curr->next = new ListNode(sum);
            curr = curr->next;
        }

        if (count != 0) {
            curr->next = new ListNode(count);
        }

        return newlist->next;
    }
};