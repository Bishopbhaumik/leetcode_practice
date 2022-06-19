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
    int sumNumbers(TreeNode* root) {
        int ans=0;
        sum(root,0,ans);
        return ans;
    }
    
    void sum(TreeNode* root, int value, int &ans)
    {
        if(root==NULL)
            return;
        sum(root->left,(value*10)+root->val,ans);
        sum(root->right,(value*10)+root->val,ans);
        if(root->left==NULL && root->right==NULL)
            ans+=(value*10)+root->val;
    }
};