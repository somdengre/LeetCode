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
    TreeNode* makeTree(vector<int>&preorder,int pstart,int pend,vector<int>&inorder,int instart,int inend,map<int,int>&inmap){
        
        if(pstart > pend || instart>inend)return NULL;
        
        TreeNode* root = new TreeNode(preorder[pstart]);
        int inroot = inmap[root->val];
        int numsLeft = inroot-instart;
        
        root->left = makeTree(preorder,pstart+1,pstart+numsLeft,inorder,instart,inroot-1,inmap);
        root->right = makeTree(preorder,pstart+numsLeft+1,pend,inorder,inroot+1,inend,inmap);
        
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int ,int>inmap;
        
        for(int i = 0;i<inorder.size();i++){
            inmap[inorder[i]] = i;
        }
        TreeNode* root = makeTree(preorder,0,preorder.size()-1,inorder,0,inorder.size(),inmap);
        
        return root;
    }
};