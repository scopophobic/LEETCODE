// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
class Solution {
public:
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        stack<TreeNode*>s;
        TreeNode *curr=root;
        while(!s.empty() || curr){
            if(curr){
                s.push(curr);
                curr=curr->left;
            }else {
                curr=s.top();
                s.pop();
                ans.push_back(curr->val);
                curr=curr->right;
            }
        }
        return ans;
        
    }

// vector<int> inorderTraversal(TreeNode* root) {
//     vector<int> ans;
//     stack<TreeNode*> s;
//     TreeNode* cur = root;
//     while (!s.empty() || cur) {
//         if (cur) {
//             s.push(cur);
//             cur = cur->left;
//         } else {
//             cur = s.top();
//             s.pop();
//             ans.push_back(cur->val);
//             cur = cur->right;
//         }
//     }
//     return ans;
// }
    };
