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
    vector<int> output(TreeNode* root, vector<int> iv)
    {
        if(root == NULL) return iv;
        
        iv.push_back(root->val);
        iv = output(root->left, iv);
        iv = output(root->right, iv);
        
        return iv;
    }
    
    
    vector<int> preorderTraversal(TreeNode* root) {
        return output(root, {});
    }
};