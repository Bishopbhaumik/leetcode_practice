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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>res;
        set<int>s;
        view(root,res,s,0);
        return res;
        
    }
    
    void view(TreeNode* root,vector<int> &res,set<int>&s,int lev)
    {
        if(root==NULL)return;
        
        if(s.find(lev)==s.end())
        {
            s.insert(lev);
            res.push_back(root->val);
        }
        
        view(root->right,res,s,lev+1);
        view(root->left,res,s,lev+1);
    }
};