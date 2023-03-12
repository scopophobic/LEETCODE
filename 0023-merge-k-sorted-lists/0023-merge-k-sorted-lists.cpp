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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        vector<int>temp;
        for(auto it : lists){
            while(it){
                temp.push_back(it->val);
                it=it->next;
            }
        }
        for(auto it : temp) cout<<it<<" ";
        cout<<"\n";
        ListNode* ans= new ListNode (0);
        if(!temp.size()) return NULL;
        ListNode *tem=ans;
        sort(temp.begin(),temp.end());
        for(int i = 0 ;i< temp.size();i++){
            ans->val = temp[i];
            if(i != temp.size()-1){
            ans->next = new ListNode(0);
            ans = ans->next;
            }
            
        }
        return tem;
    }
};