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
    vector<int> rightSideView(TreeNode* root) {
        if(!root) return {};
        map<int, int> m;
        vector<int> output;
        queue<pair<TreeNode*, int>> q;
        q.push({root, 0});
        
        while(!q.empty())
        {
            pair<TreeNode*, int> front = q.front();
            q.pop();
            
            m[front.second] = front.first -> val;
            
            if(front.first -> left)
                q.push({front.first -> left, front.second + 1});
            if(front.first -> right)
                q.push({front.first -> right, front.second + 1});
        }
        for(auto i : m)
        {
            output.push_back(i.second);
        }
        return output;
    }
};