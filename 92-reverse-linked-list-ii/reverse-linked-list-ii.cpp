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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head == NULL ||  left == right ){
            return head ; 
        }
        ListNode *dummy = new ListNode(-1) ; 
        dummy->next = head ;
        // ListNode *temp = head ;

        // ListNode *prev = dummy ;
        ListNode *last = dummy  ;
        
        // int count = NULL  ;
for(int i = 1 ; i < left ; i++){
    last = last->next ; 
}
 ListNode *temp = last->next ;
ListNode *prev =  last ;
for(int i = 0 ; i < right-left + 1  ; i++){
    ListNode * Next = temp->next ;
    temp->next = prev ;
prev = temp ;
temp = Next ; 
}
    last->next->next =  temp ; 
    last->next = prev ; 

    return dummy->next ;
        }
    };






