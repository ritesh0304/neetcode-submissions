/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL){
            return true;
        }
        if(p!=NULL && q==NULL){
            return false;
        }

        if(p==NULL && q!=NULL){
            return false;
        }

        if(p->val!=q->val){
            return false;
        }
        bool ans1=isSameTree(p->left,q->left);
        bool ans2=isSameTree(p->right,q->right);
        return ans1 & ans2;
    }
    bool postOrder(TreeNode*root, TreeNode*subRoot){
        if(root==NULL){
            return false;
        }

        bool left=postOrder(root->left,subRoot);
        if(left==true){
            return true;
        }

        bool right=postOrder(root->right,subRoot);
        if(right==true){
            return true;
        }
        bool ans=isSameTree(root,subRoot);
        return ans;

    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        return postOrder(root,subRoot);
    }
};
