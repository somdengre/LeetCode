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
    int sum=0;
    int sumOfLeftLeaves(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        queue <TreeNode*> q;
        q.push(root);
        while(q.size())
        {
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                auto it=q.front();
                if(it->left!=NULL)
                {
                    q.push(it->left);
                    if(it->left->left==NULL and it->left->right==NULL)
                        sum+=it->left->val;
                }
                if(it->right!=NULL)
                {
                    q.push(it->right);
                }
                q.pop();
            }
        }
        return sum;
    }
};