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
    bool check(ListNode *head, ListNode* &start, bool& output)
    {
        if(head == NULL)
            return true;
        
        output = check(head -> next, start, output);
        
        if(output)
        {
            if(head -> val != start -> val) return false;
            else
            {
                start = start -> next;
                return true;
            }
        }
        else
        {
            return false;
        }
    }
    
    bool isPalindrome(ListNode* head) {
        ListNode* start = head;
        bool output = true;
        return check(head, start, output);
    }
};