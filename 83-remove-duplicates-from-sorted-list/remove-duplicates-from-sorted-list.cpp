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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode * prev = new ListNode(101) ;
        prev->next = head ;
        ListNode * temp = head ;
        if(head == NULL || head->next == NULL){
            return head ; 
        }
        while(temp != NULL){
            if(prev->val == temp->val ){
                ListNode * nextt = temp->next ;
                prev->next = nextt ;
                temp = nextt ; 
            }
            else {
            prev = temp ;
            temp = temp->next ; 
        }
        }
    return head ; 
    }
};