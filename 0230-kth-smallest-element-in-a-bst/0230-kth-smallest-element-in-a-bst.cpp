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
   void addVec(TreeNode* root,int &k,int &ans){
       if(root== nullptr ) return;
      

        
        addVec(root->left,k,ans);
      
         if (--k == 0) {
            ans = root->val;
            return;  
        }
        addVec(root->right,k,ans);
        
       

   }
    
    int kthSmallest(TreeNode* root, int k) {
        vector<int>temp;
        int ans = -1;
        // temp.push_back(root->val);
        addVec(root,k,ans);
        
        
        for(auto it : temp) cout<<it<<" ";
        cout<<"\n";

        return ans;
    }
};