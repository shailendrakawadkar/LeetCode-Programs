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
    bool isPalindrome(ListNode* head) {
     vector<int> toCheck;
        while(head != NULL)
        {
            toCheck.push_back(head->val);
            head = head->next;
        }
        
        int size = toCheck.size();
        
        for(int i = 0; i < toCheck.size(); i++)
        {
            if(toCheck[i] != toCheck[(size - 1) - i])
            {
                return false;
            }
        }
        return true;
    }
};
