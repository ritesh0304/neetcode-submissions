class Solution {
public:
    bool validate(TreeNode* root, long long min, long long max) {
        if (root == nullptr) {
            return true;
        }

        // Current node must be inside the allowed range
        if (root->val <= min || root->val >= max) {
            return false;
        }

        // Left subtree: values must be < root->val
        // Right subtree: values must be > root->val
        return validate(root->left, min, root->val) &&
               validate(root->right, root->val, max);
    }

    bool isValidBST(TreeNode* root) {
        return validate(root, LLONG_MIN, LLONG_MAX);
    }
};