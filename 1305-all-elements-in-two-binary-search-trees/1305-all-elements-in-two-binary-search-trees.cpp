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
    vector<int> v;
    void solve(TreeNode* temp){
    if(temp==NULL)
        return;
    solve(temp->left);
    v.push_back(temp->val);
    solve(temp->right);
}
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        
        solve(root1);
    solve(root2);
    
    sort(v.begin(), v.end());
    return v; 
        
     }
};



// vector<int>v; // globally declaring vector
// // traversing tree and pushing value of its node to vector
// void solve(TreeNode* temp){
//     if(temp==NULL)
//         return;
//     solve(temp->left);
//     v.push_back(temp->val);
//     solve(temp->right);
// }

// vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
//     solve(root1);
//     solve(root2);
    
//     sort(v.begin(), v.end());
//     return v;   
// }