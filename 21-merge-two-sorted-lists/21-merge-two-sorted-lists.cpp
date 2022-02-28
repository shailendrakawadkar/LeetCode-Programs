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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;
        
        ListNode *output = list1, *prev = NULL;
        
        while(list1 != NULL && list2 != NULL)
        {
            if(list2->val <= list1->val)
            {
                ListNode *temp = list2;
                list2 = list2->next;
                temp->next = list1;
                if(prev != NULL) {
                    prev->next = list1 = temp;
                }
                else {
                    output = list1 = temp;
                }
                continue;
            }
            prev = list1;
            list1 = list1->next;
        }
        if(list2 != NULL) prev->next = list2;
        return output;
    }
};