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
    void solve(TreeNode* root, int targetSum, vector<int> &temp, vector<vector<int>> &output, int sum)
    {
        if(!root) return;
        
        temp.push_back(root -> val);
        
        sum += root -> val;
        
        if(root -> left)
            solve(root -> left, targetSum, temp, output, sum);
        
        if(root -> right)
            solve(root -> right, targetSum, temp, output, sum);
        
        if(!root -> left && !root -> right)
        {
            if(sum == targetSum)
                output.push_back(temp);   
        }
        temp.pop_back();
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> output;
        vector<int> temp;
        solve(root, targetSum, temp, output, 0);
        return output;
    }
};