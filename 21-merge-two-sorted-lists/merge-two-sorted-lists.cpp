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
    ListNode* mergeTwoLists(ListNode* List1, ListNode* List2) {
           if(List1 == NULL ){
            return List2 ;
        }
        if(List2 == NULL){
            return List1 ;
        }
        ListNode * dummy = new ListNode(-1); 
        ListNode *prev = dummy ;
while(List1 != NULL &&  List2 != NULL ){
  if(List1->val <= List2->val){
      ListNode * next = prev->next ; 
    prev->next = List1 ;
    List1 = List1->next ;
    prev = prev->next ; 
  }
  else {
prev->next = List2 ;
      List2 = List2->next ; 
      prev = prev->next ; 
  }
}
if(List1 != NULL ){
    prev->next = List1 ;
}
if(List2 != NULL ){
    prev->next = List2 ;
}
 return dummy->next ;        
}
};