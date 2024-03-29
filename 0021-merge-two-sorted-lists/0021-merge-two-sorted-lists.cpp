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
        ListNode *temp=new ListNode(0);
        ListNode *merge=temp;
        while(list1 && list2){
            if(list1->val>list2->val){
                merge->next=new ListNode(list2->val);
                list2=list2->next;
            }
            else {
                 merge->next=new ListNode(list1->val);
                list1=list1->next;
            }
            merge=merge->next;
        }
        if(list1) merge->next=list1;
        if(list2) merge->next=list2;
        
        return temp->next;
    }
};