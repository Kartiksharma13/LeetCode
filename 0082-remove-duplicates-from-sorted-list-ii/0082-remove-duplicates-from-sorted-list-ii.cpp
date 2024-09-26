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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL) return head;
        
        ListNode *p = NULL, *c = head, *n = head->next;
        while(n != NULL){
            if(c->val == n->val){
                while(n!=NULL && c->val == n->val){
                    n = n->next;
                }
                if(p == NULL) { head = n; }
                else { p->next = n; }
            }
            else {
                p = c;
            }
            c = n;
            if(n != NULL){
                n = n->next;
            }
        }
        return head;
    }
};