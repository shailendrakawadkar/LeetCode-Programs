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
    void solve(TreeNode* root, vector<TreeNode*> &temp)
    {
        if(!root) return;
        temp.push_back(root);
        solve(root -> left, temp);
        solve(root -> right, temp);
    }
    void flatten(TreeNode* root) {
        if(!root) return;
        vector<TreeNode*> temp;
        solve(root, temp);
        
        for(int i = 0; i < temp.size() - 1; ++i)
        {
            temp[i] -> left = NULL;
            temp[i] -> right = temp[i + 1];
        }
        temp[temp.size() - 1] -> left = NULL;
        temp[temp.size() - 1] -> right = NULL;
    }
};