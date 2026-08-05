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
    void reorderList(ListNode* head) {
        if(head==NULL||head->next==NULL){
            return ;
        }
        int n=0;
        ListNode*slow=head;
        ListNode*fast=head->next;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode*middle=slow->next;
        slow->next=NULL;
        ListNode*ptr=NULL;
        while(middle!=NULL){
            if(ptr==NULL){
                ptr=middle;
                middle=middle->next;
                ptr->next=NULL;
            }else{
                ListNode*temp=middle;
                middle=middle->next;
                temp->next=ptr;
                ptr=temp;
            }
        }
        middle=ptr;

        ListNode*temp=head;
        ptr=head;
        while(middle!=NULL){
            if(ptr!=middle){
             temp=temp->next;
             ptr->next=middle;
             ptr=ptr->next;
            }else{
                middle=middle->next;
                ptr->next=temp;
                ptr=ptr->next;
            }
        }

        return;
    }
};














