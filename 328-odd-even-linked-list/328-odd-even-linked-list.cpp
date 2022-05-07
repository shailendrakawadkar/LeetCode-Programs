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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head -> next == NULL || head -> next -> next == NULL) return head;
       
        bool isOdd = true;
        
        ListNode *even, *odd, *tempEven, *tempOdd;
        even = head -> next; odd = head; tempOdd = odd; tempEven = even;
        
         head = head -> next -> next;
        
        while(head)
        {
            if(!isOdd)
            {
                tempEven -> next = head;
                tempEven = tempEven -> next;
            }
            else
            {
                tempOdd -> next = head;
                tempOdd =tempOdd -> next;
            }
            head = head -> next;
            isOdd = !isOdd;
        }
        
        tempOdd -> next = even;
        tempEven -> next = NULL;
        return odd;
    }
};