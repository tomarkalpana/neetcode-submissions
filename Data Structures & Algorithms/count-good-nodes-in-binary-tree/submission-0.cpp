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

    int solve(TreeNode* node, int maxi){
        //base case
        if(node == nullptr)
            return 0;

        int count = 0;

        if(node->val >= maxi){
            count++;
        }

        maxi = max(maxi, node->val);

        int leftCount = solve(node->left, maxi);
        int rightCount = solve(node->right, maxi);

        return count + leftCount + rightCount;
    }

    int goodNodes(TreeNode* root) {
        return solve(root, root->val);
    }
};
