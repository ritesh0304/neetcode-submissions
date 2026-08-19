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
    vector<int> rightSideView(TreeNode* root) {
    vector<int>ans;
    if (root==NULL){return ans;}

    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        TreeNode*front=q.front();
        int size=q.size();
        ans.push_back(front->val);
        int i=0;
        while(i<size){
            front=q.front();
            if(front->right!=NULL){
                q.push(front->right);
            }
            if(front->left!=NULL){
                q.push(front->left);
            }
            q.pop();
            i++;
        }
    }

    return ans;   
    
    }
};
