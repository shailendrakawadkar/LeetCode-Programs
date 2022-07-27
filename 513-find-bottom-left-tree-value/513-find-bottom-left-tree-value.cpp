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
    void solve(TreeNode* root, pair<int, int> &output, int l){
        if(!root) return ;
        solve(root -> left, output, l + 1);
        if(l > output.first)
        {
            output.first = l;
            output.second = root -> val;
        }
        solve(root -> right, output, l + 1);
        
    }
    int findBottomLeftValue(TreeNode* root) {
        pair<int, int> output = {0, root-> val};
        solve(root, output, 0);
        return output.second;
    }
};