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
    int maxDepth(TreeNode* root) {
        int output = 0;
        if(root == NULL) return output;
        
        queue<TreeNode*> qu, tqu;
        qu.push(root);
        
        while(!qu.empty())
        {
            TreeNode* top = qu.front();
            if(top->left != NULL)
                tqu.push(top->left);
            if(top->right != NULL)
                tqu.push(top->right);
            
            qu.pop();
            if(qu.empty())
            {
                qu.swap(tqu);
                ++output;
            }
            
        }
        return output;
    }
};