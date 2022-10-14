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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* ans=NULL;
        if(head->next==NULL) return ans;
        ans=head;
        ListNode* slow=head;
        ListNode *fast =head->next;
        while(fast->next != NULL ){
            if(fast->next->next!=NULL)
            {fast=fast->next->next;
            slow=slow->next;}
            else break;
        }
        slow->next=slow->next->next;
        return ans;
    }
};