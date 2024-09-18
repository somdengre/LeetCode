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
    void f(TreeNode* root,map<TreeNode*,TreeNode*>&mp){
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty()){
            TreeNode* curr = q.front();
            q.pop();
            if(curr->left){
                q.push(curr->left);
                mp[curr->left] = curr;
            }
            if(curr->right){
                q.push(curr->right);
                mp[curr->right] = curr;
            }
            
        }
        return;
        
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        map<TreeNode*,TreeNode*>mp;
        f(root,mp);
        map<TreeNode*,bool>vis;
        queue<TreeNode*>q;
        q.push(target);
        vis[target] = true;
        int dis = 0;
        
        while(!q.empty()){
            int z = q.size();
            if(dis == k)break;
            dis++;
            for(int i = 0;i<z;i++){
                TreeNode* node = q.front();
                q.pop();
                
                if(node->left && !vis[node->left]){
                    q.push(node->left);
                    vis[node->left] = 1;
                }
                if(node->right && !vis[node->right]){
                    q.push(node->right);
                    vis[node->right] = 1;
                }
                if(mp[node] && !vis[mp[node]]){
                    q.push(mp[node]);
                    vis[mp[node]] = 1;
                }
            }
        }
        vector<int>ans;
        while(!q.empty()){
            ans.push_back(q.front()->val);
            q.pop();
        }
        
        return ans;
        
    }
};