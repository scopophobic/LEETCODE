/**

 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    bool con(ListNode* head, TreeNode* root){
        if(!root)return false;
        if(head->val!=root->val) return false;
        if(head->next == NULL) return true;
        bool left=false,right=false;
        if(head->next && root->right && head->next->val == root->right->val){
            right = con(head->next,root->right);
        }
        if(head->next && root->left && head->next->val == root->left->val){
            left = con(head->next,root->left);
        }
        
        
        return left | right;
}
    bool isSubPath(ListNode* head, TreeNode* root) {
        if(!root) return false;
        if(head->val == root->val){
            if(con(head,root)) return true;
        }
        
        return isSubPath(head,root->right)|isSubPath(head,root->left);
    }
};