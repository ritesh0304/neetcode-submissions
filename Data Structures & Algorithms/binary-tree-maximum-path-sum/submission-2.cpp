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

    int maxSum(TreeNode*root, int &ans){
        if(root==NULL){
            return 0;
        }
        // if (root->left==NULL && root->right==NULL){return root->val;}
        int left=maxSum(root->left, ans);
        int right=maxSum(root->right,ans);
        int totalSum=root->val;

        
        if(root->val + left > totalSum ){
            totalSum=totalSum+left;
            ans=max(ans,totalSum); 
        }

        if(root->val + right > totalSum ){
            totalSum=totalSum+right;
            ans=max(ans,totalSum); 
        }

        if(root->val+ left + right > root->val){
            ans=max(ans,root->val+ left + right ) ;
        }

        ans=max(ans,totalSum); 
        int temp=max(root->val + left, root->val+right);
        return max(temp,root->val);
    }

    int maxPathSum(TreeNode* root) {
        int ans=INT_MIN;
        maxSum(root,ans);
        return ans;
    }
};
