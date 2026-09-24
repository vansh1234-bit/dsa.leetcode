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
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL || head->next == NULL){
            return NULL ; 
        }
        ListNode * slow = head ;
        ListNode * fast = head ;
        bool iscycle = false ;
        while(fast->next != NULL && fast->next->next != NULL ){
             slow = slow->next ;
             fast = fast->next->next ;
             if(slow == fast){
                iscycle = true ;
                slow = head ;
                break ;
             }
        }
if(!iscycle){
return NULL ; 
}
             int count = 0 ;
if(iscycle){
while(slow != fast){
count ++ ;
slow = slow->next ;
fast = fast->next ;
}
}    
return slow  ; 
    }
};