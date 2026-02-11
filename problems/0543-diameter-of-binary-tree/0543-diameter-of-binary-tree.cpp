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
    int height(TreeNode* root) {
        if(root==NULL)
            return 0;
        return max(height(root->left),height(root->right))+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        //can be left subtree
        //can be right subtree/
        //can be both
        if(root==NULL)
            return 0;
        int left_d = diameterOfBinaryTree(root->left);
        int right_d = diameterOfBinaryTree(root->right);
        int total_h = height(root->left)+height(root->right);

        return max(left_d, max(right_d,total_h));
    }
};