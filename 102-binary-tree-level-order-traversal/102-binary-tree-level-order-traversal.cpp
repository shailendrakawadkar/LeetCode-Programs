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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> output;
        if(root == NULL) return output;
        
        queue<TreeNode*> qu, tqu;
        vector<int> tv;
        qu.push(root);
        
        while(!qu.empty())
        {
            TreeNode* top = qu.front();
            if(top->left != NULL)
                tqu.push(top->left);
            if(top->right != NULL)
                tqu.push(top->right);
            
            qu.pop();
            tv.push_back(top->val);
            if(qu.empty())
            {
                qu.swap(tqu);
                output.push_back(tv);
                tv.clear();
            }
            
        }
        return output;
    }
};