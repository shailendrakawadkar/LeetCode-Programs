/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), ne xt(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *start = head; ListNode *end = head; ListNode *output = head;
        while(head -> next)
        {
            if(k > 1)
            {
                start = start -> next;
                k--;
            }
            else
            {
                end = end -> next;
            }
            head = head -> next;
        }
        
        swap(start -> val, end -> val);
        return output;
    }
};