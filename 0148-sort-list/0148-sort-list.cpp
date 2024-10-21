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
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode *slow = head, *fast = head;
        ListNode *temp = NULL; //slow's previous node

        while(fast!=NULL && fast->next!=NULL){
            temp = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        temp->next = NULL;

        ListNode *left = sortList(head);
        ListNode *right = sortList(slow);

        return mergeSortedList(left,right);
    }
    ListNode* mergeSortedList(ListNode *head1,ListNode *head2){
        ListNode *ans = new ListNode(0);
        ListNode *curr = ans;
        while(head1 && head2){
            if(head1->val < head2->val){
                curr->next = head1;
                head1 = head1->next;
            }
            else {
                curr->next = head2;
                head2 = head2->next;
            }
            curr = curr->next;
        }
        if(head1 !=NULL){ curr->next = head1; }
        if(head2 !=NULL){ curr->next = head2; }

        return ans->next;
    }
};