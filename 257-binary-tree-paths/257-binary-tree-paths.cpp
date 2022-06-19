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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>res;
        path(root,res,"");
        return res;
    }
    void path(TreeNode* root,vector<string>&res,string curr)
    {
        if(root==NULL)return;
        
        if(root->left==NULL && root->right==NULL)
        {
            curr+=to_string(root->val);
            res.push_back(curr);
            return;
        }
        curr+=to_string(root->val)+"->";
        if(root->left)
        {
            path(root->left,res,curr);
        }
        if(root->right)
            path(root->right,res,curr);
    }
};