class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int sum1=accumulate(nums.begin(),nums.end(),0);
        set<int>s;
        for(auto &i:nums){
            s.insert(i);
        }
        int sum = accumulate(s.begin(), s.end(), 0);
        
        int r=sum1-sum;
        
        int n = nums.size();
        int m = n * (n+1)/2 - sum;
        
        return {r,m};
    }
};