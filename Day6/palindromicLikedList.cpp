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
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        int cnt=0;
        ListNode* fast=head;
        stack<int> stk;
        while(fast->next && slow->next){
            stk.push(slow->val);
            fast=fast->next;
            cnt++;
            slow=slow->next;
            if(fast->next){
                fast=fast->next;
                cnt++;
            }
        }
        // cout<<cnt<<"\n";
        // cout<<stk.top();
        // if((cnt+1)%2 && !stk.empty())
        //     stk.pop();
        if((cnt+1)%2)
            slow=slow->next;
        while(slow && !stk.empty()){
            if(stk.top()!=slow->val){
                return false;
            }
            stk.pop();
            slow=slow->next;
        }
        return true;
    }
    
    
};