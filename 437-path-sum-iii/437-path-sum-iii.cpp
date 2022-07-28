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
    void solve(TreeNode* root, int targetSum, vector<int> &temp, int &ct)
    {
        if(!root) return ;
        temp.push_back(root -> val);
        
        if(root -> left)
            solve(root -> left, targetSum, temp, ct);
        
        if(root -> right)
            solve(root -> right, targetSum, temp, ct);
        
        long long sum = 0;
        for(int i = temp.size() - 1; i > -1; --i)
        {
            sum += temp[i];
            if(sum == targetSum) ++ct;
        }
        temp.pop_back();
    }
    int pathSum(TreeNode* root, int targetSum) {
        int ct = 0;
        vector<int> temp;
        
        solve(root, targetSum, temp, ct);
        return ct;
    }
};