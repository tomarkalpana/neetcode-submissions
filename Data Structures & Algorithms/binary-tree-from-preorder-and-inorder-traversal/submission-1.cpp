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
    int preIdx = 0;

    TreeNode* solve(vector<int>& preorder, vector<int>& inorder, int inStart, int inEnd){

        if(inStart > inEnd)
            return nullptr;

        int rootVal = preorder[preIdx];
        preIdx++;

        int inIdx;

        for(int i=inStart; i<inEnd; i++){
            if(inorder[i] == rootVal){
                inIdx = i;
                break;
            }
        }

        TreeNode* root = new TreeNode(rootVal);

        root->left = solve(preorder, inorder, inStart, inIdx-1);
        root->right = solve(preorder, inorder, inIdx+1, inEnd);

        return root;
        
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int inEnd = inorder.size()-1;

        return solve(preorder, inorder, 0, inEnd);
    }
};
