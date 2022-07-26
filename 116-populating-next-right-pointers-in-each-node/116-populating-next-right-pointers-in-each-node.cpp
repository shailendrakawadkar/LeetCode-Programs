/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return root;
        
        Node* temp = root;
        queue<Node*> q;
        q.push(temp);
        
        while(!q.empty())
        {
            int size = q.size();
            vector<Node*> temp_vector;
            for(int i = 0; i < size; ++i)
            {
                Node* frontNode = q.front();
                q.pop();

                if(!q.empty())
                    frontNode -> next = q.front();
                else
                    frontNode -> next = NULL;  
                
                if(frontNode -> left)
                    temp_vector.push_back(frontNode -> left);
                if(frontNode -> right)
                    temp_vector.push_back(frontNode -> right);
            }
            
           
            for(int i = 0; i < temp_vector.size(); ++i)
            {
                q.push(temp_vector[i]);
            }
            
        }
        return root;
    }
};