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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> set;
        while(headA != NULL){
            set.insert(headA);
            headA = headA->next;
        }
        while(headB != NULL){
            if(set.find(headB) != set.end()){
                return headB;
            }
            headB = headB->next;
        }
        return NULL;
    }
};