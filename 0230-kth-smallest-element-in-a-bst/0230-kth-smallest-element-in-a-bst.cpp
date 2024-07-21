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
    void addVec(TreeNode* root, vector<int>&temp){
       if(root== nullptr ) return ;

        
        
        addVec(root->right,temp);
        temp.push_back(root->val);
        addVec(root->left,temp);
   }
    
    int kthSmallest(TreeNode* root, int k) {
        vector<int>temp;
        // temp.push_back(root->val);
        addVec(root,temp);
        
        
        for(auto it : temp) cout<<it<<" ";
        cout<<"\n";
        
        return temp[temp.size()-k];
    }
};