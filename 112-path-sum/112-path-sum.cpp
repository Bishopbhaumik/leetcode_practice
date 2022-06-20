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
    bool hasPathSum(TreeNode* root, int targetSum) {
        return check(root,0,targetSum);
    }
    
    bool check(TreeNode* root,int curr,int targetSum)
    {
        if(root==NULL) return false;
        
        if(root->left==NULL && root->right==NULL)
           return (curr+root->val)==targetSum;
        
        return check(root->left,curr+root->val,targetSum)||check(root->right,curr+root->val,targetSum);
    }
};