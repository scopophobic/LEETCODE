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
    void check(TreeNode * root,int &ans,int minVal, int maxVal){
        if (root == nullptr) {
            return ;
        }
        ans = max(ans,max(abs(minVal - root->val),abs(maxVal-root->val)));

        
        
        
        minVal= min(root->val,minVal);
        maxVal= max(root->val,maxVal);
        
        check(root->left,ans,minVal,maxVal);
        check(root->right,ans,minVal,maxVal);
        
        
        

    }
    int maxAncestorDiff(TreeNode* root) {
        int ans=0;
        check(root,ans,root->val,root->val);
        
        return ans;
    }
};