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
        ListNode* result = new ListNode(0);
        ListNode* temp = result;

        int carry = 0;

        while(l1!= NULL || l2 != NULL || carry != 0){
            int val = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;

            carry = val / 10;
            int nextVal = val % 10;

            temp->next = new ListNode(nextVal);
            temp = temp->next;

            if(l1 != NULL)
                l1 = l1->next;
            
            if(l2 != NULL)
                l2 = l2->next;
        }

        return result->next;
        
    }
};
