//  https://leetcode.com/problems/intersection-of-two-linked-lists/

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
        if(headA == NULL || headB == NULL){
            return NULL;
        }
        
        if(headA == headB){
            return headA;
        }
        
        if(getIntersectionNode(headA->next, headB)!=NULL){
            return getIntersectionNode(headA->next, headB);
        }
        
        return getIntersectionNode(headA, headB->next);
    }
};