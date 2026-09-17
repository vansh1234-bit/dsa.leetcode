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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // we make a dummy node to put our ans in that node 
        ListNode * dummy = new ListNode(-1) ;
        ListNode * curr = dummy ; 
        // take carry =  0 at first 
        int carry =  0 ;
        // run untill both the list will become empty  
        while(l1 != NULL || l2 != NULL){
            int sum  = carry ;
            if(l1 != NULL){
                sum += l1->val ;
                l1 = l1->next ;
            }
            if(l2!= NULL){
                sum += l2->val ;
                l2 = l2->next ; 
            }
            curr->next = new ListNode(sum % 10) ;
            curr = curr->next ; 
            carry = sum / 10 ; 
        }
        if(carry != 0){
            curr->next = new ListNode(carry) ;
        }
        return dummy->next ; 
    }
};