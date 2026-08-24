class Solution {
public:
    TreeNode* recursive(
        const unordered_map<int, int>& pos,
        const vector<int>& preorder,
        int& i,
        int left,
        int right
    ) {
        // No nodes in this subtree
        if (left > right) {
            return nullptr;
        }

        // Preorder gives us the root
        int rootValue = preorder[i];
        int rootIndex = pos.at(rootValue);

        TreeNode* root = new TreeNode(rootValue);
        i++;

        // Inorder: left subtree | root | right subtree
        root->left = recursive(
            pos, preorder, i,
            left, rootIndex - 1
        );

        root->right = recursive(
            pos, preorder, i,
            rootIndex + 1, right
        );

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int, int> pos;

        // value -> index in inorder
        for (int i = 0; i < inorder.size(); i++) {
            pos[inorder[i]] = i;
        }

        int preorderIndex = 0;

        return recursive(
            pos,
            preorder,
            preorderIndex,
            0,
            inorder.size() - 1
        );
    }
};