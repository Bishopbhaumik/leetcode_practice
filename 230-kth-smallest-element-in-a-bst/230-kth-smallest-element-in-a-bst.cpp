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
    set<int> s;
    void traverse(TreeNode* root){
        if(!root) return;
        s.insert(root->val);
        traverse(root->left);
        traverse(root->right);
    }
    int kthSmallest(TreeNode* root, int k) {  
        traverse(root);
        for(auto ans:s){
            k--;
            if(!k) return ans;
        }
        return 0;
    }
};