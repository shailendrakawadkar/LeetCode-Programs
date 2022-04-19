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
    ListNode* remove(ListNode* head, ListNode* current, bool &isDublicate)
    {
        if(head == NULL || head -> next == NULL)
            return head;
        
        current = remove(head -> next, current, isDublicate);
        
        if(head-> val == head -> next -> val)
        {
            isDublicate = true;
        }
        else
        {
            if(isDublicate)
            {
                head -> next = current -> next;
                isDublicate = false;
            }
            current = head;
        }
        return current;
    }
    ListNode* deleteDuplicates(ListNode* head) {
        bool isDublicate = false;
        ListNode* current =  remove(head, NULL, isDublicate);
        
        if(isDublicate) current = current -> next;
        
        return current;
    }
};