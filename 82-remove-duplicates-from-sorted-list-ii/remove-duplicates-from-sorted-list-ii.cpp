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
        if(head == NULL || head->next == NULL){
            return head ; 
        }
        ListNode *temp = head ;
        ListNode * dummy = new ListNode(-1) ;
        dummy->next = head ;
        ListNode *last = dummy ;
        int count = 0 ;
        while(temp != NULL && temp->next != NULL ){
            ListNode *next = temp->next ;
            if(temp->val == next->val){
                temp = next ; 
                count++ ;
                continue ;
            }
            if(count != 0 ){
                temp = temp->next ;
                last->next = temp ; 
                count = 0 ;
                continue ; 
            }
            last->next = temp ;
            last = last->next ;
            temp = temp->next ; 
            // count = 0 ; 
        } 

        if(count != 0 ){
            last->next = NULL ; 
        }
        return dummy->next ; 
    }
};