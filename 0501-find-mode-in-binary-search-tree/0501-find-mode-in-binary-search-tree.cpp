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
    vector<int> findMode(TreeNode* root) {
        vector<int> ans;
        vector<int> temp;
        map<int,int>mp;
        queue<TreeNode*> q;
        
        q.push(root);
        
        while(q.empty() != true){
            int width = q.size();
            for(int i = 0 ; i < width ; i++){
                
                TreeNode* curr = q.front();
                q.pop();
                
                mp[curr->val]++;
             
                
                if(curr->left){
                    q.push(curr->left);
                }
                
                if(curr->right){
                    q.push(curr->right);
                }                        
                               
            }
            
        }
        
        for(auto it: mp){
            temp.push_back(it.second);
            
        }
        
        sort(temp.begin(),temp.end());
        
        for(auto it:mp){
            if(it.second == temp[temp.size()-1]){
                ans.push_back(it.first);
            }
        }
        
        return ans;
        
    }
};