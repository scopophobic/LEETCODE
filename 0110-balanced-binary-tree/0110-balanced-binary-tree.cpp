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
    int get(TreeNode* root){
        if(root==NULL) return 0;
        int r = get(root->right);
        int l= get(root->left);
        if (l == -1 || r == -1 || abs(l - r) > 1)  return -1;
        int h=max(r,l)+1;
        return h;
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        if (get(root) == -1)  return false;

        return true;
    }
};