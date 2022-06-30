//  https://leetcode.com/problems/merge-two-sorted-lists/

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL){
            return list2;
        }
        else if(list2==NULL){
            return list1;
        }
        
        ListNode* head=(list1->val>list2->val?list2:list1);
        int ele1=list1->val,ele2=list2->val;
        
        list1=(ele1>ele2?list1:list1->next);
        list2=(ele1>ele2?list2->next:list2);
        ListNode* temp=head;
        
        while(list1!=NULL && list2!=NULL){
            if(list1->val > list2->val){
                temp->next=list2;
                list2=list2->next;
            }
            else{
                temp->next=list1;
                list1=list1->next;
            }
            
            temp=temp->next;
        }
        
        temp->next=(list1!=NULL?list1:list2);
        
        return head;
    }
};