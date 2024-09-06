class Solution {
public:
    // Function to delete nodes with values present in 'nums'
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        // Create a set for fast lookup of values to be deleted
        set<int> te(nums.begin(), nums.end());
        
        // Use a dummy node to handle the head deletions easily
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        // Use two pointers: 'prev' and 'curr'
        ListNode* prev = dummy;
        ListNode* curr = head;
        
        while (curr != nullptr) {
            if (te.find(curr->val) != te.end()) {
                // If current node's value is in the set, delete it
                prev->next = curr->next;
                delete curr;  // Free the memory
                curr = prev->next;  // Move to the next node
            } else {
                // Otherwise, move both pointers
                prev = curr;
                curr = curr->next;
            }
        }
        
        // Return the new head (dummy->next)
        ListNode* newHead = dummy->next;
        delete dummy;  // Free the dummy node memory
        return newHead;
    }
};
