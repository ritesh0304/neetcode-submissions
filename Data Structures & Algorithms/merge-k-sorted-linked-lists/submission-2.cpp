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
    ListNode* merge(ListNode*list1, ListNode*list2){
        ListNode*ans=NULL;
        ListNode*temp=NULL;
        if(list1==NULL){
            return list2;
        }
        if(list2==NULL){
            return list1;
        }
        while(list1!=NULL && list2!=NULL){
            if(list1->val > list2->val){
                if(ans==NULL){
                    ans=list2;temp=list2;
                    list2=list2->next;
                }else{
                    temp->next=list2;
                    temp=temp->next;
                    list2=list2->next;
                }
            }else{
                if(ans==NULL){
                    ans=list1;
                    temp=list1;
                    list1=list1->next;
                }else{
                    temp->next=list1;
                    temp=temp->next;
                    list1=list1->next;
                }
            }
        }
        if(list1!=NULL){
            temp->next=list1;
        }
        if(list2!=NULL){
        temp->next=list2;
        }
        return ans;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0){
            return NULL;
        }
        if(lists.size()==1){
            return lists[0];
        }
        ListNode*ans=NULL;
        ListNode*first=NULL;
        ListNode*second=NULL;
        

        while(lists.size()>1){
            vector<ListNode*>next;
        for( int i=0; i<lists.size();i+=2){
            if( i+1<lists.size()){
                first=lists[i];
                second=lists[i+1];
                ans=merge(first,second);
                next.push_back(ans);
            }else{
                next.push_back(lists[i]);
            }
        }
         lists=next;
        }

        return lists[0];
    }
};
