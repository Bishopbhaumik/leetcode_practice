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
   int minDepthHelper(TreeNode* root, int len){
        if (root->left == NULL && root->right == NULL){
            return len+1;
        }
        
        int way1 = INT_MAX; 
        int way2 = INT_MAX;
        
        if (root->left){
            way1 = minDepthHelper(root->left, len+1);
        }
        if (root->right){
            way2 = minDepthHelper(root->right, len+1);
        }
        
        return min(way1, way2);
    }
    
    int minDepth(TreeNode* root) {
        if (root == NULL){
            return 0;
        }
        int ans = minDepthHelper(root, 0);
        return ans;
    }
};