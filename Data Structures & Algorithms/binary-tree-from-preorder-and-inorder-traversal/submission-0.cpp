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
    TreeNode*recursive(map<int,int>&m,vector<int>&preorder,int &i,int x,int y){
if (x > y) return NULL;
        int limit=m[preorder[i]];
        TreeNode *root=new TreeNode(preorder[i]);
        i++;
        TreeNode* left=recursive(m,preorder,i,x,limit-1);
        TreeNode* right=recursive(m,preorder,i,limit+1,y);
       
        root->left=left;
        root->right=right;
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
       map<int,int>m;
       for(int i=0;i<inorder.size();i++){
        m[inorder[i]]=i;
       } 
       int index=0;
       return recursive(m,preorder,index,0,inorder.size()-1);
    }
};
