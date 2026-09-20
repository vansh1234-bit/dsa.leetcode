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
    void reorderList(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return ; 
        }
     ListNode * slow = head ;
     ListNode * t = head ; 
     ListNode * fast = head ;
     while(fast->next != NULL &&  fast->next->next != NULL){
     fast = fast->next->next ;
     slow = slow->next ;

     }    
     if(fast->next != NULL){
        fast = fast->next ; 
     }
     ListNode * remove = slow->next ;
     ListNode * temp = slow->next  ;
     ListNode * prev = slow ;
     while(temp != NULL ){
    ListNode * next = temp->next ;
    temp->next = prev ;
    prev = temp ;
    temp = next ; 
     }
     remove->next = NULL ;
slow->next = NULL ;
fast = prev ;
while(fast != NULL ){
 ListNode * tnext = t->next ;
 ListNode * fnext = fast->next ;
 t->next = fast ;
t = tnext ;
 fast->next = t;
  
 fast = fnext ; 
} 
    }
};