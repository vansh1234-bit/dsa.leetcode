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
    ListNode* removeElements(ListNode* head, int val) {
        
        // ListNode *prev = head ;
     
        while(head != NULL && head->val == val){
               ListNode *temp = head;
                head = head->next ;
                delete temp ;
        }
        if(head == NULL){
            return NULL ;
        }
        ListNode *prev = head ;
        ListNode *temp = head->next ;
        while(temp != NULL ){
            if(temp->val == val ){
                prev->next = temp->next ;
                delete temp ;
                temp = prev->next ;
            }
            else {
                prev = prev->next ;
                temp = temp->next ;
            }
        }
        return head ;
    }
};