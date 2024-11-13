class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(), nums.end());
        long long int n = nums.size();
        long long int i = 0, ans = 0;
        for(auto it : nums){
            
            auto a = lower_bound(nums.begin()+i + 1, nums.end(), lower - it);
            auto b = upper_bound(nums.begin()+i + 1, nums.end(), upper - it);
            
            ans += distance(a,b);
            i++;
        }
        
        
        return ans;
    }
};