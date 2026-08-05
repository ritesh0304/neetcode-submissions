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
        ListNode*temp=head;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }


        int i=0;
        ListNode*ans=NULL;
        temp=head;
        ListNode*it=ans;
        while(temp!=NULL){
            ListNode* node = new ListNode(temp->val);
            temp=temp->next;
            if(it==NULL){
                node->next=NULL;
                it=node;
                ans=it;
            }else{
                node->next=it;
                it=node;
                ans = it;  
            }
        }
        bool flag=true;
        ListNode*sol=head;
        temp=sol;

        while(i<n-1){
            if(flag){
                head=head->next;
                temp->next=ans;
                temp=temp->next;
                flag=!flag;
            }else{
                ans=ans->next;
                temp->next=head;
                temp=temp->next;
                flag=!flag;
            }
            i++;
        }
        temp->next=NULL;
        head=sol;
    }
};














