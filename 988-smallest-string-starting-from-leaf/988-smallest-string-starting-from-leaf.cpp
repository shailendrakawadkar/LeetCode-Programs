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
    void solve(TreeNode* root, string &output, string str)
    {
        if(!root) return;
        char ch = root -> val + 97;
        str = ch + str;
        
        if(!root -> left && !root -> right)
        {
            if(str < output || output == "")
                output = str;
        }
        
        solve(root -> left, output, str);
        solve(root -> right, output, str);
    }
    string smallestFromLeaf(TreeNode* root) {
        string output = "";
        solve(root, output, "");
        //reverse(output.begin(), output.end());
        return  output;
    }
};