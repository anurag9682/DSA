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
    vector<vector<int>> levelOrder(TreeNode* root) {
        TreeNode* cur = root;
        vector<vector<int>>ans;
        if(cur == NULL) return ans; // Base Case

        deque<TreeNode*>queue;
        queue.push_back(cur);

        while(!queue.empty()){
            int len = queue.size();
            vector<int>cur_level;

            for(int i =0; i<len; i++){
                TreeNode* node = queue.front();
                queue.pop_front();
                cur_level.push_back(node->val);

                if(node->left!= NULL) queue.push_back(node->left);

                if(node->right != NULL) queue.push_back(node->right);
            }
            ans.push_back(cur_level);
        }
        return ans;
      
    }
};