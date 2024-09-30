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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *prev = NULL, *curr = head;
        int length = 0;
        while(curr!=NULL){
            length++;
            curr = curr->next;
        }
        int ans = length - n;
        curr = head;
        if(ans == 0) { head = head->next; }
        while(ans>0){
            prev = curr;
            curr = curr->next;
            ans--;
            if(ans == 0){
                prev->next = curr->next;
                delete curr;
            }
        }
        return head;
    }
};