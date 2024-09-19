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
    TreeNode* f(vector<int>& inorder, vector<int>& postorder,int poststart,int postend,int instart,int inend,map<int,int>&mp){
        if(poststart > postend || instart > inend)return NULL;
        
        TreeNode* root = new TreeNode(postorder[postend]);
        int inroot = mp[root->val];
        int numsleft = inroot-instart;
        
        root->left = f(inorder,postorder,poststart,poststart+numsleft-1,instart,inroot-1,mp);
        root->right = f(inorder,postorder,poststart+numsleft,postend-1,inroot+1,inend,mp);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        map<int,int>mp;
        int n = inorder.size();
        for(int i = 0;i<n;i++){
            mp[inorder[i]] = i;
        }
        
        return f(inorder,postorder,0,n-1,0,n-1,mp);
    }
};