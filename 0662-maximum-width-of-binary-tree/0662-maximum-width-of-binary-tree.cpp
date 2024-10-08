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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,long long>>q;
        q.push({root,0});
        int ans = 0;
        while(!q.empty()){
            int min = q.front().second;
            int z = q.size();
            int first,last;
            for(int i = 0;i<z;i++){
                TreeNode* node = q.front().first;
                long long cur_ind = q.front().second-min;
                q.pop();
                if(i == 0)first = cur_ind;
                if(i == z-1)last = cur_ind;
                if(node->left)q.push({node->left,cur_ind*2+1});
                if(node->right)q.push({node->right,cur_ind*2+2});
            }
            ans = max(ans,last-first+1);
        }
        
        return ans;
    }
};