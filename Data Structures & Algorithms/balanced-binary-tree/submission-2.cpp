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
    int recursive(TreeNode*root){
        if(root==NULL){
            return 0;
        }
        int left=recursive(root->left);
        if(left==-100){
            return left;
        }
        int right=recursive(root->right);
        if(right==-100){
            return right;
        }
        int height=abs(left-right);
        if(height>1){
            return -100;
        }
        return max(left,right)+1;
    }
    bool isBalanced(TreeNode* root) {
        int ans=recursive(root);
        if(ans==-100){
            return false;
        }
        return true;
    }
};
