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
int height(TreeNode*root, int &maxDiameter){
        if (root == NULL) {
            return 0;
        }
        int left=0, right=0;
        left = height(root->left, maxDiameter);
        right = height(root->right, maxDiameter);
        int height=left+right;
        maxDiameter=max(maxDiameter,height);
       return max(left, right) + 1;
}
    int diameterOfBinaryTree(TreeNode* root) {
        int maxDiameter=0;
        if(root==NULL){
            return 0;
        }
        height(root,maxDiameter);
        return maxDiameter;
    }
};
