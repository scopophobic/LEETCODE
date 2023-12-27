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
    int heightTree(TreeNode* root) {

        if (root == nullptr) return 0;

        int leftHeight = heightTree(root->left);
        int rightHeight = heightTree(root->right);


        int maxHeight = max(leftHeight, rightHeight) + 1;

        return maxHeight;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if (root == nullptr) return 0; 


        int leftHeight = heightTree(root->left);
        int rightHeight = heightTree(root->right);

        // Calculate diameter passing through the root
        int diameterThroughRoot = leftHeight + rightHeight;

        // Calculate diameters of left and right subtrees recursively
        int leftDiameter = diameterOfBinaryTree(root->left);
        int rightDiameter = diameterOfBinaryTree(root->right);

        // Return the maximum diameter among all possibilities
        return std::max({diameterThroughRoot, leftDiameter, rightDiameter});
    }
};
