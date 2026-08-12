/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*, Node*> mp;
        Node*temp=head;
        Node*ans=NULL;
        Node*tempAns=ans;
        while(temp!=NULL){
            if(temp==head){
                Node*temp1=new Node(temp->val);
                ans=temp1;
                tempAns=ans;
                 mp[temp] = tempAns;
            }else{
                Node*temp1=new Node(temp->val);
                tempAns->next=temp1;
                tempAns=tempAns->next;
                mp[temp] = temp1;
            }
            temp=temp->next;  
        }

        temp=head;
        while(temp!=NULL){
            Node*temp1=mp[temp];
            Node*randomPointer=temp->random;
            Node*temp1RandomPointer=mp[randomPointer];
            temp1->random=temp1RandomPointer;
            temp=temp->next;
        }
        return ans;
    }
};
