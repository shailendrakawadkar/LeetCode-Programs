/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void maxSum(ListNode* &start, ListNode* current, int& maxi)
    {
        if(!current) return;
        
        maxSum(start, current -> next, maxi);
        
        maxi = max(maxi, current -> val + start -> val);
        start = start -> next;
    }
    
    int pairSum(ListNode* head) {
        int maxi = INT_MIN;
        
        maxSum(head, head, maxi);
        
        return maxi;
    }
};