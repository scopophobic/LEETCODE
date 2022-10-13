// *
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };




class Solution {
public:

        
        
    ListNode* middleNode(ListNode* head) {
        ListNode *h1=head;
        ListNode *h2=head;
        
        if(head== NULL || head->next== NULL){
            return head;
        }
        
        while(h2!=NULL && h2->next!=NULL){
            h2=h2->next->next;
            h1=h1->next;
           
        }
        
        return h1;
        
        
    }
};