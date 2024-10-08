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
    TreeNode* f(vector<int>& preorder, vector<int>& inorder,int prestart,int preend,int instart,int inend,map<int,int>&mp){
        if(prestart > preend || instart > inend)return NULL;
        TreeNode* root = new TreeNode(preorder[prestart]);
        int inroot = mp[root->val];
        int numsleft = inroot-instart;
        
        root->left = f(preorder,inorder,prestart+1,prestart+numsleft,instart,inroot-1,mp);
        root->right = f(preorder,inorder,prestart+numsleft+1,preend,inroot+1,inend,mp);
        
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int>mp;
        for(int i = 0;i<inorder.size();i++){
            mp[inorder[i]] = i;
        }
        return f(preorder,inorder,0,preorder.size()-1,0,inorder.size()-1,mp);
        
    }
};