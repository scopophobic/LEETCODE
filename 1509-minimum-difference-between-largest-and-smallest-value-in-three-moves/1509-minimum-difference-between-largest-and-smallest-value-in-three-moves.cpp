class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n = nums.size();
        if(n<=4) return 0;
        sort(nums.begin(),nums.end());

        int i=0;
        int ans = INT_MAX;
        
        
        ans = min(min((nums[n-4]-nums[0]),(nums[n-3]-nums[1])),min((nums[n-2]-nums[2]),(nums[n-1]-nums[3])));
        
        
        return ans;
    }
};