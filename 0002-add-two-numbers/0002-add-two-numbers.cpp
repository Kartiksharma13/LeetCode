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
        ListNode* l3 = new ListNode(0);
        ListNode *head = l3;
        int carry = 0;
        while(l1!=NULL || l2!=NULL || carry!=0){
            int value = carry;
            if(l1!=NULL){
                value += l1->val;
                l1 = l1->next;
            }
            if(l2!=NULL){
                value += l2->val;
                l2 = l2->next;
            }
            carry = value/10;
            l3->next = new ListNode(value%10);
            l3 = l3->next;
        }
        return head->next;
    }
};