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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = new ListNode(0);
        temp->next=head;
        ListNode* s = head;
        int size=0;
        while(s!=NULL){
            s=s->next;
            size++;
        }
        int r = size-n;
        int i=1;
        s=temp;
        while(r-- > 0){
            s=s->next;
        }
        s->next=s->next->next;
        
        return temp->next;
    }
};