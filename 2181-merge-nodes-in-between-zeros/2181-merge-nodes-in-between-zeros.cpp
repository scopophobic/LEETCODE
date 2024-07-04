class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head->next;
        
        ListNode* ans = new ListNode(0);
        ListNode* res = ans;
        
        int sum = 0;
        while (temp != nullptr) {
            if (temp->val == 0) {
                
                    ans->next = new ListNode(sum);
                    ans = ans->next;
                    sum = 0;

            } else {
                sum += temp->val;
            }
            temp = temp->next;
        }
        
        return res->next; 
    }
};