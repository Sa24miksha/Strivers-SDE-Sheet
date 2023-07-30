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
   ListNode *detectCycle(ListNode *head) {
        if(!head || !head->next) return NULL; 
        ListNode*slow=head;
        ListNode*fast=head;
        ListNode*curr=head;
        ListNode*temp=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow){
                temp=slow;
                break;
            }
        }
        if(!fast || !fast->next)return NULL;
            while(curr!=temp){
                curr=curr->next;
                temp=temp->next;
            }
          
        return temp;
        
    }
};
