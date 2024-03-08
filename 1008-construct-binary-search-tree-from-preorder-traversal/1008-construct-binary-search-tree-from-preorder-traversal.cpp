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
    TreeNode* bstFromPreorder(vector<int>& nums) {
        int i = 0;
        return build(nums,i,INT_MAX);
    }
    
    TreeNode* build(vector<int>&nums,int& i,int bound){
        if(i == nums.size() || nums[i]>bound)return NULL;
        TreeNode* root = new TreeNode(nums[i++]);
        root->left = build(nums,i,root->val);
        root->right = build(nums,i,bound);
        
        return root;
        
    }
};