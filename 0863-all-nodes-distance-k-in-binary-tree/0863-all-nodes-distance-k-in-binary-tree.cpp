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
    void markParent(TreeNode* root,unordered_map<TreeNode*,TreeNode*>&mp){
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty()){
            int size = q.size();
            
                TreeNode* temp = q.front();
                q.pop();
                if(temp->left){
                    mp[temp->left] = temp;
                    q.push(temp->left);
                }
                if(temp->right){
                    mp[temp->right] = temp;
                    q.push(temp->right);
                }
            
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*,TreeNode*>parent;
        markParent(root,parent);
         unordered_map<TreeNode*,bool>vis;
        queue<TreeNode*>q;
        q.push(target);
        vis[target] = 1;
        int curr = 0;
        while(!q.empty()){
            int size = q.size();
            
            if(curr++ == k)break;
            for(int i = 0;i<size;i++){
                TreeNode* temp = q.front();
                q.pop();
                
                if(temp->left && !vis[temp->left] ){
                    q.push(temp->left);
                    vis[temp->left] = true;
                }
                if(temp->right && !vis[temp->right]){
                    q.push(temp->right);
                    vis[temp->right] = true;
                }
                if( parent[temp] && !vis[parent[temp]] ){
                    q.push(parent[temp]);
                    vis[parent[temp]] = true;
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