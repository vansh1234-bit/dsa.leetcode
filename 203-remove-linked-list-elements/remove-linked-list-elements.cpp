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
        if(head == NULL){
            return NULL ;
        }
        ListNode *prev = head ;
        ListNode *temp = head->next ;
        while(head != NULL && head->val == val){
                head = head->next ;
        }
        
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