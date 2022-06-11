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
         if(!head)return NULL;
        
        //map to store node->random equivalent to each node
        unordered_map<Node*,Node*> mp;
        Node* t1=NULL,*t2=NULL;
        t1 = head;
     
        Node* newhead = new Node(head->val);
        mp[t1] = newhead;
        t2 = newhead;
        t1 = t1->next;
        while(t1){
            Node* node = new Node(t1->val);
            t2->next=node;
            mp[t1]=node;
            t1 = t1->next;
            t2=t2->next;
        }
        
        t1=head,t2=newhead;
        
        while(t1){
            t2->random=t1->random==NULL?NULL:mp[t1->random];
            t1=t1->next;
            t2=t2->next;
        }
        
        return newhead;
    }
};