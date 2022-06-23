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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        bool isEven = true;
        
        while(!q.empty()) {
            int n = q.size();
            int prev = isEven ? 0 : INT_MAX;
            
            while(n--) {
                TreeNode* temp = q.front(); q.pop();
                
                if(isEven) {
                    if(!(temp -> val % 2) || prev >= temp -> val) return false; 
                }
                else {
                    if((temp -> val % 2) || prev <= temp -> val) return false;
                }
                prev = temp -> val;
                
                if(temp -> left) q.push(temp -> left);
                if(temp -> right) q.push(temp -> right);
            }
            isEven = !isEven;
        }
        
        return true;
    }
};