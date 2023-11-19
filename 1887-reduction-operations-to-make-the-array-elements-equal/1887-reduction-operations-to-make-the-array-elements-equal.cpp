class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        
        int ans = 0, prev = 0;
        for (auto it = freq.rbegin(); it != freq.rend(); ++it) {
            if (it != freq.rbegin()) {
                ans += prev; 
            }
            prev += it->second; 
        }
        
        return ans;
    }
};
