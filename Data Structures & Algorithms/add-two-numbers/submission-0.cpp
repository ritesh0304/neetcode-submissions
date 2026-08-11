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
    ListNode* reverse(ListNode* head){
        ListNode*prev=NULL;
        while(head!=NULL){
            ListNode*temp=head->next;
            if(prev==NULL){
                prev=head;
                prev->next=NULL;
            }else{
                head->next=prev;
                prev=head;
            }
            head=temp;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL){
            return l2;
        }
        if(l2==NULL){
            return l1;
        }


        int remainder=0;
        int carry=0;
        ListNode*ans=NULL;
        ListNode*ptr=NULL;
        while(l1!=NULL && l2!=NULL){
            int sum=l1->val+l2->val + carry;
            carry = sum / 10;
            remainder = sum % 10;

            if(ans==NULL){
                    ListNode*temp=new ListNode(remainder);
                    ans=temp;
                    ptr=ans;
            }else{
                    ListNode*temp=new ListNode(remainder);
                    ptr->next=temp;
                    ptr=ptr->next;
            }

            l1=l1->next;
            l2=l2->next;
        }
        if(l1!=NULL){
            while(l1!=NULL){
                int sum=l1->val + carry;
                carry = sum / 10;
                remainder = sum % 10;

                if(ans==NULL){
                        ListNode*temp=new ListNode(remainder);
                        ans=temp;
                        ptr=ans;
                }else{
                        ListNode*temp=new ListNode(remainder);
                        ptr->next=temp;
                        ptr=ptr->next;
                }

                l1=l1->next;
            }
        }
        if(l2!=NULL){
            while(l2!=NULL){
                int sum=l2->val + carry;
                carry = sum / 10;
                remainder = sum % 10;

                if(ans==NULL){
                        ListNode*temp=new ListNode(remainder);
                        ans=temp;
                        ptr=ans;
                }else{
                        ListNode*temp=new ListNode(remainder);
                        ptr->next=temp;
                        ptr=ptr->next;
                }

                l2=l2->next;
            }        
        }

        if(carry!=0){
            ptr->next=new ListNode(carry);
        }
        // ans=reverse(ans);
        return ans;
    }
};
