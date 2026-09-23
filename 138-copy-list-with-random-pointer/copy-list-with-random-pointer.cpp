/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
       Node * temp = head ;
        // we are making  new nodes in between the two orginal nodes 
        while(temp != NULL){
    Node*next = temp->next ; 
    Node * newnode = new Node(temp->val) ;
        temp->next = newnode ;
        newnode ->next = next ; 
        temp = next ; 
        }
// now we connect the random conters of newly made nodes 

temp = head ;

while(temp != NULL){
    Node * newnode = temp->next ;
    if(temp->random){
    newnode->random = temp->random->next ;
    }
    else {
        newnode->random = NULL ; 
    }
    temp = temp->next->next  ; 
}
//  now we just want to obatined our list 

Node * dummy = new Node(-1) ;
// dummy->next =  ;
temp = head ;
Node *prev = dummy ;  ; 
while(temp != NULL){
prev->next = temp->next ;
prev = prev->next ;
temp->next = temp->next->next ;
temp = temp->next ;
}

return dummy->next ; 
    }
};