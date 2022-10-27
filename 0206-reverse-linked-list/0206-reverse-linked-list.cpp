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
        ListNode *pre = NULL; 
        ListNode *temp = head;
        ListNode *curr;
        
        while(temp){
            curr=temp->next;
            temp->next= pre;
            pre=temp;
            temp=curr;
        }
        return pre;
        
        
    }
};