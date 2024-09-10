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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        
        ListNode * curr = head;
        
        while(curr->next){
            
            ListNode* nextnode = curr ->next;
            
            int gcdnode = __gcd(curr->val,nextnode->val);
            
            ListNode* newnode = new ListNode(gcdnode);
            newnode -> next = nextnode;
            // cout<<newnode->val;
            // cout<<curr->val<<" "<<nextnode->val<<" : "<<gcdnode<<endl;
            
            curr->next = newnode;
            curr = curr->next->next;

        }
        
        return head;
    }
};