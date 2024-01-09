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
    void leafSea(TreeNode* root,vector<int>&temp){
        if(root==NULL) return;
        
        if(root->right == NULL && root->left == NULL) temp.push_back(root->val);
        
        leafSea(root->right,temp);
        leafSea(root->left,temp);
        
        
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>temp1,temp2;
        leafSea(root1,temp1);
        leafSea(root2,temp2);
        
        if(temp1.size()!=temp2.size()) return false;
        for(int i=0;i<temp1.size();i++){
            if(temp1[i]!=temp2[i]) return false;
        }
        return true;
    }
};