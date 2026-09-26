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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode * temp = head ;
        int size = 0 ;
        while(temp != NULL){
          size ++ ;
          temp = temp->next ;
        }
        vector<ListNode*> ans ; 
        temp = head ; 
        if(k >= size){
            for(int i =  0 ;i < k ; i++){
               
                if(temp!= NULL){
                 ListNode * next = temp->next ;
                 temp->next = NULL ;
                 ans.push_back(temp) ;
                 temp = next ; 
                 }
                else {
                    // ListNode * dummy = NULL ;
                ans.push_back(NULL) ;
            }
        }
        return ans ; 
        }
        int n = size / k ; 
         temp = head ;
        for (int i =  0 ; i < k ; i++){
            ListNode * dummy = new ListNode(-1) ;
            dummy->next  = temp ;
            ListNode * prev = dummy;
for(int j = 0 ; j < n ; j++){
prev->next = temp ; 
prev = temp ;
temp = temp->next ;
}
if(i < size % k){
     prev->next = temp ;
     prev = temp ;
     temp = temp->next ; 

}

prev->next = NULL ;
ans.push_back(dummy->next) ;
        }
        return ans ; 

    }
};