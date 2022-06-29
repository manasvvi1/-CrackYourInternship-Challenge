//  https://leetcode.com/problems/middle-of-the-linked-list/

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
    ListNode* middleNode(ListNode* head) {
        ListNode *slow, *fast;
        
        if(head == NULL){
            return NULL;
        }
        
        slow = head;
        fast = head->next;
        
        while(fast!=NULL){
            slow = slow->next;
            
            if(fast->next!= NULL) fast = fast->next->next;
            else fast = fast->next;
        }
        
        return slow;
    }
};