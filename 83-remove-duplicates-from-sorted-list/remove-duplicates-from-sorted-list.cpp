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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *prev = head ;
        if(head == NULL || head->next == NULL){
            return head  ;
        }
        while(prev->next != NULL ){
           ListNode *temp = prev->next ;
           if(temp->val == prev->val){
            prev->next = temp->next ;
            delete temp ;
            // prev = prev->next ;
           }
           else {
            prev = prev->next ;
           }

        }
        return head ;
    }
};