//  https://leetcode.com/problems/reverse-linked-list/

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
    ListNode* reverseList(ListNode* head) {
        ListNode *prev, *present, *nextNode;
        
        if(head == NULL || head->next == NULL){
            return head;
        }
        
        present = head;
        nextNode = head->next;
        
        while(present!=NULL){
            if(present == head){
                prev = present;
                present->next = NULL;
                present = nextNode;
                nextNode = nextNode->next;
            }
            else{
                present->next = prev;
                prev = present;
                present = nextNode;
                if(nextNode!=NULL) nextNode = nextNode->next;
            }
        }
        
        return prev;
    }
};