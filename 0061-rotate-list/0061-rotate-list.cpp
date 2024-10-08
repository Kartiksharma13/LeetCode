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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head ==NULL || head->next == NULL) return head;
        ListNode *temp = head, *tail = head;
        int len = 1;
        while(tail->next!=NULL){
            tail = tail->next;
            len++;
        }
        tail->next = head;
        k = k%len;
        for(int i=0; i<len-k; i++){
            tail = tail->next; 
        }
            ListNode *newh = tail->next;
            tail->next = NULL;
            head = newh;
        
        return head;
    }
};