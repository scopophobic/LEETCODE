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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head->next;
        
        ListNode ans(0);
        ListNode* res = &ans;
        
        // vector<int>ans;
        int sum = 0;
        while(temp!=nullptr){
            if (temp->val == 0) {
                if(sum!=0){
                res->next = new ListNode(sum);
                res = res->next;
                sum = 0;
                }
            }else {
                sum += temp->val;
            }
            
            // cout<<sum<<" ";
            temp = temp ->next;
            
        }
        
        return ans.next;
    }
};