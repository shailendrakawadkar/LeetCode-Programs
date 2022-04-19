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
    void remove(ListNode* head, int &n)
    {
        if(head == NULL)
        {
            return;
        }
        
       if(n == 1 && head -> next -> next == NULL)
       {
           head -> next = NULL;
            n = -1;
           return;
       }
        remove(head -> next, n);
        --n;
        if(!n)
        {
                ListNode *removed = head -> next;
                *head = *removed; 
        }
    }
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(n == 1 && head -> next == NULL) return NULL;
        ListNode *start = head;
        
        remove(head, n);
        return start;
    }
};