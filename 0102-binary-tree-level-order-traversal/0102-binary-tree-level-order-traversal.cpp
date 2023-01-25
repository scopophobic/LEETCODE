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
        if(root==NULL) return {};
        queue<TreeNode*>q;
        q.push(root);
        q.push(nullptr);
        vector<vector<int>>ans;
        TreeNode* cur;
        vector<int>level;
        while(!q.empty()){
            TreeNode* cur = q.front();
            q.pop();
            if(!cur){
                ans.push_back(level);
                level.clear();
                if(!q.empty()) q.push(nullptr);
            }else {
                level.push_back(cur->val);
                if(cur->left)q.push(cur->left);
                if(cur->right)q.push(cur->right);
            }
        }
        return ans;
    }
};