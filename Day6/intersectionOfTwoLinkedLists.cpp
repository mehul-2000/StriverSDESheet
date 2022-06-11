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
        //brute force
//         set<ListNode*> s;
        
//         while(headA){
//             s.insert(headA);
//             headA=headA->next;
//         }
//         while(headB){
//             if(s.find(headB)!=s.end()){
//                 return headB;
//             }
//             headB = headB->next;
//         }
//         return NULL;
        
        ListNode* ptrA = headA,*ptrB = headB;
        
        while(ptrA!=ptrB){
            if(!ptrA){
                ptrA = headB;
            }else{
                ptrA = ptrA->next;
            }
            
            if(!ptrB){
                ptrB = headA;
            }else{
                ptrB = ptrB->next;
            }
        }
        return ptrA;
    }
};