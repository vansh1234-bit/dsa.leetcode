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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode * temp1 = headA ;
        ListNode * temp2 = headB ;
        int count1 = 0 ;
        int count2 = 0 ;
        while(temp1!= NULL || temp2 != NULL){
             if(temp1 != NULL){
                count1 = count1 + 1 ;
                temp1 = temp1->next ;
             }
             if(temp2 != NULL){
                count2 = count2 + 1  ;
                temp2 = temp2->next ;
             }

        }
        int m = count1 - count2 ; 
        ListNode * t1 = headA ;
        ListNode * t2 = headB ;
if(m >= 0 ){
for(int i = 0 ; i < m ; i++){
    t1= t1->next ;
}
}
else {
    for(int i = 0 ; i < -m ; i++){
        t2= t2->next ; 
    }
}

while(t1 != NULL){
    if(t1 == t2){
        return t1 ; 
    }
    t1=t1->next ;
    t2=t2->next ; 
}
return NULL ; 
    }
};