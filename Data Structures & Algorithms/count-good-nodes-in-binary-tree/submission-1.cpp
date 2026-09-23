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
    int solve(TreeNode* root, int maxVal){
        //base case
        if(root == nullptr)
            return 0;

        int count = 0;

        if(root->val >= maxVal){
            count++;
        }

        int newMax = max(maxVal, root->val);

        int leftCount = 0;
        int rightCount = 0;

        leftCount = solve(root->left, newMax);
        rightCount = solve(root->right, newMax);

        return count + leftCount + rightCount;

    }
    

    int goodNodes(TreeNode* root) {
        return solve(root, root->val);
    }
};
