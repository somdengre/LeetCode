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
    int maxDepth(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        
        queue<TreeNode *> q;
        int ans = 0;
        
        q.push(root);
        
        while(!q.empty()){
            int s = q.size();
            
            for(int i = 0;i<s;i++){
                TreeNode *node  = q.front();
                q.pop();
                
                if(node -> left != NULL)q.push(node->left);
                if(node -> right != NULL)q.push(node->right);
            }
            ans++;
        }
        return ans;
    }
};




// class Solution {
// public:
//     int maxDepth(TreeNode* root) {
//         if(root == NULL){
//             return 0;
//         }
//         queue <TreeNode *>q;
//         int ans=0;
        
//         q.push(root);
//         while(!q.empty()){
//             int size = q.size();
            
            
//             for(int i=0;i<size;i++){
//                 TreeNode *node = q.front();
//                 q.pop();
//                 if(node->left != NULL)q.push(node->left);
//                 if(node->right != NULL)q.push(node->right);
//             }
            
//             ans++;
            
//         }
        
//         return ans;
//     }
// };


