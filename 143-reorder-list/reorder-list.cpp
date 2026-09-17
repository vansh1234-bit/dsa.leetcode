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
        ListNode * fast = head ;
        ListNode * slow = head ;
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next ;
            fast= fast->next->next ;
        }
        if(fast->next != NULL){
            fast = fast->next ; 
        }


        ListNode * prev = NULL ;
        ListNode* curr = slow->next ;
        slow->next = NULL ; 
        while(curr != NULL){
            ListNode * nextnode = curr->next ;
            curr->next = prev ;
            prev = curr ;
            curr = nextnode ; 
        }
        ListNode * first = head ;
        ListNode * second = prev ;
        while(second!= NULL ){
            ListNode * firstNext = first->next ;
            ListNode * secondNext = second->next ;
            first->next = second;
            second->next = firstNext ;
            first = firstNext ;
            second = secondNext ; 
        }
    }
};