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
        
        // if nth node is last node of LL;
        if(n == 1 && head -> next -> next == NULL) 
        {
             head -> next = NULL;
             n = -1;
             return;
        }
        remove(head -> next, n);
        --n;
        
        //if nth node is in middle of LL;
        if(!n)
        {
                ListNode *removed = head -> next;
                *head = *removed; 
        }
    }
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //For removing starting node of LL if LL contain single node and value of n = 1
        if(n == 1 && head -> next == NULL) return NULL;
        
        // pointer to point starting node of LL;
        ListNode *start = head;
        
        remove(head, n);// Function for removing node;
        return start;
    }
};