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
    ListNode* partition(ListNode* head, int x) {
        ListNode* temp = head;
        vector<int>high,low;
        ListNode* ans = new ListNode(0); 
        ListNode* curr = ans;
        while (temp!=NULL){
            if (temp->val<x)
                low.push_back(temp->val);
            
            else 
                high.push_back(temp->val);
            
            temp=temp->next;
        }
        
        for(int i=0;i<low.size();i++){
            curr->next=new ListNode(low[i]);
            curr=curr->next;
        }
        for(int i =0;i<high.size();i++){
            curr->next=new ListNode(high[i]);
            curr=curr->next;
        }

        
        
        
        
        return ans->next;
        
        
        
    }
};