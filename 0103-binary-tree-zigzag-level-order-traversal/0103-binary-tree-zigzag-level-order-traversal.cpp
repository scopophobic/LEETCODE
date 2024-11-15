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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        q.push(root);
        int j = 2;
        if(!root) return ans;
        while(!q.empty()){  
            vector<int>temp;
            int end = q.size();
            for(int i=0;i<end;i++){
                TreeNode* ne = q.front(); q.pop();
                temp.push_back(ne->val);
                if(ne->left) q.push(ne->left);
                if(ne->right) q.push(ne->right);
            }
            if(j%2 != 0) reverse(temp.begin(),temp.end());
            j++;
            ans.push_back(temp);
        }
        
        return ans;
    }
};