/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *temp = head ;
        // if(head == NULL || head->next == NULL){
            // return false ;
        // }
        while(temp != NULL ){
         if(temp->next != NULL && temp->next->val == INT_MIN){
           return true  ;
         }
         temp->val = INT_MIN ;
         temp = temp->next ;
        }
        return false ;
    }
};