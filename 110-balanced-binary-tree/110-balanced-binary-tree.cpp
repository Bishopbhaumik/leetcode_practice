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
    bool res=true;
    bool isBalanced(TreeNode* root) {  
        if(root==NULL) 
            return res;     
        dpth(root);
        return res;    
    }
    
   int dpth(TreeNode* root)
    {
        if (root==NULL)
            return 0;
        
        int left=1+dpth(root->left);
        int right=1+dpth(root->right);
        
        if(abs(left-right)>1)
        {
         res=false;
         exit;
        }

     return max(left,right);
    }
};