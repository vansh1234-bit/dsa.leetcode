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
        if(head == NULL || n == 0 ){
            return head ; 
        }
        int k = 0 ;
        ListNode * main = head ; 
     while(main != NULL){
     k++ ;
     main = main->next ;
     }   
     ListNode * dummy = new ListNode(0) ;
      dummy->next = head ; 
     ListNode * prev = dummy ;
    //  prev->next = head ; 
     ListNode * temp = head ;
     int m = k - n ;
     for (int i =  0; i < m ; i++){
   prev = temp ;
   temp = temp->next ;
}
prev->next = temp->next ;
delete temp ;
     
     ListNode * ans = dummy->next ;
     delete dummy ; 
     return ans ; 
    }
};