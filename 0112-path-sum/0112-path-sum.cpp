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
    bool f(TreeNode* root,int k,int &sum){
        if(root == NULL)return false;
        
        sum+=root->val;
        if(sum == k && !root->left && !root->right){
            return true;
        }
        bool le = f(root->left,k,sum);
        bool ri = f(root->right,k,sum);
        sum-=root->val;
        
        return le || ri;
    }
    bool hasPathSum(TreeNode* root, int k) {
        int sum = 0;
        return f(root,k,sum);
    }
};