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
    
    int count(ListNode* head){
        int cnt=0;
        while(head){
            cnt++;
            head = head->next;
        }
        return cnt;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        int len = count(head);
        if(!head || !head->next)
            return head;
        
        k%=len;
        
        ListNode* curr = head,*slow=head;
        
        while(k--){
            while(curr->next)
                curr = curr->next;
            
            curr->next = head;
            head = curr;
            
            while(curr->next!=head)
                curr = curr->next;
            
            curr->next = NULL;
        }
        return head;
    }
};