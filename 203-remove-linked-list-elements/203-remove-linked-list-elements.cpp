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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL)
            return head;
        ListNode *prev = NULL, *main = head;
        while(head != NULL)
        {
            if(head->val == val)
            {
                if(prev != NULL)
                    prev->next = head->next;
                else
                {
                    main = head->next;
                }
            }
            else
            {
              prev = head;
            }
            head = head->next;  
         }
        return main;
    }
};