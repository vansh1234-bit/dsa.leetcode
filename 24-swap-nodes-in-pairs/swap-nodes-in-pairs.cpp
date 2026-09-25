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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head ;  
        }

        ListNode * temp = head->next ;
        ListNode * prev = head ;
        ListNode * dummy = new ListNode(-1) ;
        dummy->next = head ;
        ListNode * last = dummy ;
        while(temp != NULL){
          ListNode * next = temp->next ;
          last->next = temp ;
          temp->next = prev ;
          prev->next = next ;

          if(next != NULL){
            last = prev ;
            prev = next ;
            temp = next->next ;
          }
          else {
          temp = next ;
        }
        }
         return dummy->next ; 
    }
};