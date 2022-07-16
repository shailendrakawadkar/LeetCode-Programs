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
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int carry = 0;
        ListNode* output= new ListNode();
        ListNode *tempOutput = output;
        while(l1 || l2)
        {
            ListNode *temp = new ListNode();
            if(l1 && l2)
            {
                temp-> val = carry + l1 -> val + l2 -> val;
            }else if(l1 && !l2)
            {
                temp-> val = carry + l1 -> val;
            } else {
                temp-> val = carry + l2 -> val;
            }
            if(temp -> val > 9){
                carry = temp -> val / 10;
                temp -> val = temp -> val % 10;
            }else
            {
                carry = 0;
            }
            if(!tempOutput) tempOutput = temp;
            else {
                tempOutput -> next = temp;
                tempOutput = tempOutput -> next;
            } 
            if(l1) l1 = l1-> next;
            if(l2) l2 = l2-> next;
        }
        if(carry)
        {
            ListNode *temp = new ListNode(carry);
            tempOutput-> next = temp;
        }
        return output-> next;
    }
};