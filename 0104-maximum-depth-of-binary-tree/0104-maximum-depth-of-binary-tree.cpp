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
    int f(TreeNode* root){
        if(root == NULL)return 0;
        if(!root->left && !root->right )return 0;
        int left = -1e9;
        int right = -1e9;
        
        if(root->left){
            left = 1+f(root->left);
        }
        if(root->right){
            right = 1 + f(root->right);
        }
        return max(left,right);
        
    }
    int maxDepth(TreeNode* root) {
        if(root == NULL)return 0;
        int ans = 0;
        ans = f(root);
        
        return ans+1;
    }
};