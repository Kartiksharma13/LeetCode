/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *fast = head, *slow = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(fast == slow) break;
        }
        if(fast == NULL || fast->next==NULL || slow==NULL) return NULL;
        ListNode *x = fast, *y = head;
        while(x!=y){
            x = x->next;
            y = y->next;
        }
        return y;
    }
};