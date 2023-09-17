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
    
    void inorder(TreeNode* root,priority_queue<int>& b,int& k)
    {
        if(root==nullptr) return;
        inorder(root->left,b,k);
        b.push(root->val);
        if(b.size()>k) b.pop();
        inorder(root->right,b,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        if(root==nullptr) return -1;
        priority_queue<int> b;
        inorder(root,b,k);
        return b.top();
        
        
    }
};


