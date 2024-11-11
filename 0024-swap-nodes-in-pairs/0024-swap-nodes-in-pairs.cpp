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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* dummy = new ListNode();
        ListNode *prev = dummy, *curr = head;
        while(curr && curr->next){
            prev->next = curr->next; //prev->2 
            curr->next = prev->next->next; //1->3
            prev->next->next = curr; //2->1->3->.....

            prev = curr;
            curr = curr->next;
        }
        return dummy->next;
    }
};