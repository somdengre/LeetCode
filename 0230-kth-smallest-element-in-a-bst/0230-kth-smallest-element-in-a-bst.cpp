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
    void f(TreeNode* root,int &ans,int &c,int k){
        if(root == NULL)return;
        
        f(root->left,ans,c,k);
        c++;
        if(c == k){
            ans = root->val;
            return;
        }
        f(root->right,ans,c,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        int ans = -1;
        int c = 0;
        f(root,ans,c,k);
        return ans;
    }
};