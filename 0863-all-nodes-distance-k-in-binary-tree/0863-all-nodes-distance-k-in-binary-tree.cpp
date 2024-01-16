/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void markParents(TreeNode* root,unordered_map<TreeNode*, TreeNode*>&parent, TreeNode* target){
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* cur = q.front();
            q.pop();
            if(cur->left){
                parent[cur->left] = cur;
                q.push(cur->left);
            }
            if(cur->right){
                parent[cur->right] = cur;
                q.push(cur->right);
            }
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*, TreeNode*>parent;
        markParents(root,parent,target);
        unordered_map<TreeNode* ,bool>visited;
        queue<TreeNode*>q;
        q.push(target);
        visited[target] = true;
        int clevel = 0;
        while(!q.empty()){
            int s = q.size();
            if(clevel++ == k)break;
            for(int i = 0;i<s;i++){
                TreeNode* cur = q.front();
                q.pop();
                if(cur->left && !visited[cur->left]){
                    q.push(cur->left);
                    visited[cur->left] = true;
                }
                if(cur->right && !visited[cur->right]){
                    q.push(cur->right);
                    visited[cur->right] = true;
                }
                if(parent[cur] && !visited[parent[cur]]){
                    q.push(parent[cur]);
                    visited[parent[cur]] = true;
                }
            }
        }
        vector<int>res;
        while(!q.empty()){
            TreeNode* curr = q.front();
            q.pop();
            res.push_back(curr->val);
        }
        return res;
        
    }
};