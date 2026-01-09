class Solution {
public:
    pair<int, TreeNode*> dfs(TreeNode* root) {
        if (!root) return {0, NULL};

        auto left = dfs(root->left);
        auto right = dfs(root->right);

        if (left.first == right.first) {
            return {left.first + 1, root};
        }
        if (left.first > right.first) {
            return {left.first + 1, left.second};
        }
        return {right.first + 1, right.second};
    }

    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        return dfs(root).second;
    }
};