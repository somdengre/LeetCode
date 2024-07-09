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
    TreeNode* f(vector<int>&nums,int ub,int&i){
        if(i == nums.size() || nums[i] > ub){
            return NULL;
        }
        TreeNode* root = new TreeNode(nums[i]);
        i++;
        root->left = f(nums,root->val,i);
        root->right = f(nums,ub,i);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& nums) {
        int i = 0;
        return f(nums,INT_MAX,i);
    }
};