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
    vector<int> output(TreeNode* root, vector<int> vi)
    {
        if(root == NULL) return vi;
        
        vi = output(root->left, vi);
        vi.push_back(root->val);
        vi = output(root->right, vi);
        
        return vi;
    }
    vector<int> inorderTraversal(TreeNode* root) {
        return output(root, {});
    }
};