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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans=NULL,*curr = NULL,*prev=NULL;
        while(list1 && list2){
            if(list1->val<=list2->val){
                curr = new ListNode(list1->val);
                  list1 = list1->next;
            }else{
                curr = new ListNode(list2->val);
                list2 = list2->next;
            }
            if(!ans){
                ans = curr;
                prev = ans;
            }
            else{
                prev->next = curr;
                prev = prev->next;
            }
          
            
        }
        
        while(list1){
            curr = new ListNode(list1->val);
            if(!ans){
               ans = curr;
               prev = ans; 
            }else{
                prev->next = curr;
                prev = prev->next;
            }
            list1 = list1->next;
        }
        while(list2){
            curr = new ListNode(list2->val);
            if(!ans){
               ans = curr;
               prev = ans; 
            }else{
                prev->next = curr;
                prev = prev->next;
            }
            list2 = list2->next;
        }
        return ans;
    }
};