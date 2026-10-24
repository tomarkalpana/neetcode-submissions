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

    int maxi = 0;

    int solve(TreeNode* root){
        if(root == NULL)
            return 0;

        int leftH = solve(root->left);
        int rightH = solve(root->right);

        maxi = max(maxi, leftH + rightH);

        return 1 + max(leftH, rightH);
    }
    
public:
    int diameterOfBinaryTree(TreeNode* root) {
        solve(root);

        return maxi;
        
    }
};
