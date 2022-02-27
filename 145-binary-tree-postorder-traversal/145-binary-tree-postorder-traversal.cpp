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
        
        iv = output(root->left, iv);        
        iv = output(root->right, iv);
        iv.push_back(root->val);
        
        return iv;

    }
    vector<int> postorderTraversal(TreeNode* root) {
        return output(root, {});
    }
};