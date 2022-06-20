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
    int sumOfLeftLeaves(TreeNode* root) {
        return leftsum(root,false);
    }
    
    int leftsum(TreeNode* root, bool flag)
    {
        if(root==NULL) return 0;
        
        if(root->left==NULL && root->right==NULL && flag)
            return root->val;
        
        int lh=leftsum(root->left,true);
        int rh=leftsum(root->right,false);
        
        return lh+rh;
    }
};