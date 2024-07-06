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
    TreeNode* insertIntoBST(TreeNode* root, int x) {
        TreeNode* point = root;
        TreeNode* temp = new TreeNode(x);
        if(root == NULL){
            return temp;
        }
        while(root){
            if(root->val > x){
                if(root->left)root = root->left;
                else{
                    root->left = temp;
                    break;
                }
            }else{
                if(root->right)root = root->right;
                else{
                    root->right = temp;
                    break;
                }
            }
        }
        return point;
    }
};