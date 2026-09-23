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
    ListNode* partition(ListNode* head, int x) {
        ListNode * dummy = new ListNode(-1) ;
        ListNode * prev = dummy ;
        prev->next = dummy ;
        ListNode *tailconnect =  dummy ;

        ListNode * dum = new ListNode(-1) ;
        ListNode * phale = dum ;
        phale->next = dum ;
        ListNode * temp = head ;
        while(temp != NULL ){
            ListNode * next = temp->next ;
            if(temp->val >= x  ){
            prev->next = temp ;
            prev = prev->next ; 
}
else{
    phale->next = temp ;
    phale = phale->next ;
}
temp = temp->next ;
        }
        prev->next = NULL ; 
    phale->next = tailconnect->next ;  
    return dum->next ;   
    }
};