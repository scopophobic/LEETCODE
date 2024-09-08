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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*>ans(k);
        int i = 0;
        ListNode* tem = head;
        int n = 0;
        while(tem){
            tem=tem->next;
            n++;
        }
        
        
        int ex = n%k;
        int t = n/k;
        
        cout<<t<<" "<<ex<<endl;
        
        
        ListNode* cur = head;

       for (int in = 0; in < k; in++) {
            
            if (!cur) break;
            ans[in] = cur;
            int currSize = t + (ex > 0 ? 1 : 0);
            ex--;

            for(int i=1;i<currSize;i++){
                cur= cur->next;
            }
            ListNode * neo = cur->next;
            cur -> next = NULL;
            cur = neo;


        }
        

        
        return ans;
    }
};