/*  Function which returns the  root of 
    the flattened linked list. */
Node* mergeList(Node* l1,Node* l2){
    Node* ans=NULL,*curr,*prev=NULL;
    while(l1 && l2){
        if(l1->data<=l2->data){
            curr = new Node(l1->data);
            l1 = l1->bottom;
        }else{
            curr = new Node(l2->data);
            l2 = l2->bottom;
        }
        
        if(!ans){
            ans = curr;
            prev = curr;
        }
        else{
            prev->bottom = curr;
            prev = prev->bottom;
            
        }
    }
    while(l1){
         curr = new Node(l1->data);
         if(!ans){
            ans = curr;
            prev = curr;
        }
        else{
            prev->bottom = curr;
            prev = prev->bottom;
            
        }
        l1 = l1->bottom;
    }
    while(l2){
        curr = new Node(l2->data);
        
         if(!ans){
            ans = curr;
            prev = curr;
        }
        else{
            prev->bottom = curr;
            prev = prev->bottom;
            
        }
        l2 = l2->bottom;
    }
    return ans;
}
Node *flatten(Node *root)
{
   // Your code here
   if(!root || !root->next)
     return root;
   root->next = flatten(root->next);
   root = mergeList(root,root->next);
   return root;
}