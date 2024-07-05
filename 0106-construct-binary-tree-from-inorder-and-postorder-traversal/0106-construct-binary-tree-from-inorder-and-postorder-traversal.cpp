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
    TreeNode* makeTree(vector<int>& inorder,int ins,int ine,vector<int>& postorder,int ps,int pe,unordered_map<int,int>&mp){
        if(ps>pe || ins>ine)return NULL;
        
        TreeNode* root = new TreeNode(postorder[pe]);
        int inroot = mp[root->val];
        int numsLeft = inroot-ins;
        
        root->left = makeTree(inorder,ins,inroot-1,postorder,ps,ps+numsLeft-1,mp);
        root->right = makeTree(inorder,inroot+1,ine,postorder,ps+numsLeft,pe-1,mp);
        
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int,int>mp;
        
        for(int i = 0;i<inorder.size();i++){
            mp[inorder[i]] = i;
        }
        
        TreeNode* root = makeTree(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1,mp);
        return root;
    }
};