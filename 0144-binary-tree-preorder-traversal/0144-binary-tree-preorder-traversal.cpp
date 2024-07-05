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
    vector<int> preorderTraversal(TreeNode* root) {
         if(root == NULL)return {};
        vector<int>ans;
        TreeNode* cur = root;
        
        while(cur){
            if(cur->left == NULL){
                ans.push_back(cur->val);
                cur = cur->right;
                //if cur->left is null move to right
            }else{
                TreeNode* prev = cur->left;
                //will try to move to the last element of the left subtree
                while(prev->right && prev->right != cur){
                    prev = prev->right;
                }
                
                if(prev->right == NULL){
                    //make the thread
                    prev->right = cur;
                    ans.push_back(cur->val); // only change from inorder
                    cur = cur->left;
                }else{
                    //remove the thread
                    prev->right = NULL;
                    
                    cur = cur->right;
                }
           }
        }
        return ans;
    }
};