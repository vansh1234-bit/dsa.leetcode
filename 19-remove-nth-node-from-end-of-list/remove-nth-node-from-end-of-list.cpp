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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
if(head == NULL ){
    return head ; 
}
        ListNode * temp  = head ;
        int count = 0 ;
        while(temp != NULL){
           count ++ ;
           temp = temp->next ;
        }
        temp = head ;
        ListNode * dummy = new ListNode(-1) ;
        dummy->next = head ;
        ListNode * prev = dummy ;
        int from_starting = count - n ;
        for(int i = 0 ; i < from_starting  ; i++){
     prev = temp ;
     temp = temp->next ;
        }
        ListNode * next = temp->next ;
        prev->next =  next ;
        delete temp ;

        return dummy->next ;
    }
};