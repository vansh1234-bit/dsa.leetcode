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
     ListNode * dummy = new ListNode(0) ;
     ListNode* prev = dummy ;
    //  ListNode * ans = dummy ;
    //  ans->next = head ; 
     prev->next = head ; 
     if(head == NULL || head->next == NULL){
        return head ;
     }
     
     ListNode * temp = head ;

     while( temp != NULL && temp->next != NULL){
        ListNode  * next = temp->next ;
        temp->next = next->next ;
        next->next = temp ;
        prev->next = next ;

        prev = temp  ; 
                temp = temp->next ;
     }
     return dummy->next ; 
    }
};