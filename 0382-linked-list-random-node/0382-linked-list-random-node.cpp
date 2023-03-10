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
    vector<int>v;
    int n;
public:
    Solution(ListNode* head) {
        ListNode *p = head;
        while( p ){
            v.push_back(p->val);
            p=p->next;
        }
        n = v.size();
    }
    
    int getRandom() {
        int static i=0;
        if( i == 0 ){
            srand(time(NULL));
            i++;
        }
        return v[rand()%n];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */