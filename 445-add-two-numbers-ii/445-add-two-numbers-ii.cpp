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
    ListNode* reverse(ListNode *head, ListNode *prev, ListNode *current)
    {
        if(head == NULL) return prev;
        
        current = head;
        head = head -> next;
        current -> next = prev;
        prev = current;
        return reverse(head, prev, current);
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(!l1) return l2;
        if(!l2) return l1;
        l1 = reverse(l1, NULL, NULL);
        l2 = reverse(l2, NULL, NULL);
        ListNode *carry = new ListNode(0, NULL); ListNode *last = NULL;
        ListNode *r_l1 = l1; ListNode *r_l2 = l2; ListNode * answer = NULL;
        
        while(l1 || l2)
        {
            int sum = (l1 ? l1 -> val : 0) + (l2 ? l2 -> val : 0) + carry -> val;
            carry -> val = 0;
            string str = to_string(sum);
            if(str.size() == 2)
            {
                carry -> val = str[0] - '0';
                if(l1) l1 -> val = str[1] - '0';                
                if(l2) l2 -> val = str[1] - '0';
            }
            else
            {
                if(l1) l1 -> val = str[0] - '0';                
                if(l2) l2 -> val = str[0] - '0';
            }
            if(l1) {
                last = l1;
                l1 = l1 -> next;
                answer = r_l1;
            }
            if(l2) {
                last = l2;
                l2 = l2 -> next;
                answer = r_l2;
            }
        }
       
        if(carry -> val != 0) last -> next = carry;
        return reverse(answer, NULL, NULL);
    }
};