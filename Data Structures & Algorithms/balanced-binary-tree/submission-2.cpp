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

    int height(TreeNode* root){
        if(root == NULL)
            return 0;

        int leftH = height(root->left);
        int rightH = height(root->right);

        if(leftH == -1 || rightH == -1)
            return -1;

        int diff = leftH - rightH; 

        if(diff < -1 || diff > 1)
            return -1;
        
        return 1 + max(leftH, rightH);
    }

public:
    bool isBalanced(TreeNode* root) {
        if(root == nullptr)
            return true;

        if(height(root) != -1)
            return true;
        else return false;

        
    }
};
