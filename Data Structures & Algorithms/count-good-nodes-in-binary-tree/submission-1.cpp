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
    void countGoodNodes(TreeNode*root,int maxValue,int rootVal,int &goodNode){
        if(root==NULL){
            return ;
        }
        if(root->val >= rootVal && root->val >= maxValue){
            goodNode++;
        }
        maxValue=max(maxValue,root->val);
        countGoodNodes(root->left,rootVal,maxValue,goodNode);
        countGoodNodes(root->right,rootVal,maxValue,goodNode);
    }
    int goodNodes(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        if (root->left==NULL && root->right==NULL){
            return 1;
        }
        int goodNode=1;
        int rootVal=root->val;
        countGoodNodes(root->left,root->val,rootVal,goodNode);
        countGoodNodes(root->right,root->val,rootVal,goodNode);
        return goodNode;
    }
};
