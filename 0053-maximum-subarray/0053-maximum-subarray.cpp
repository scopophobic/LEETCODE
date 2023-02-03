class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current=0;
        int maxtillnow=INT_MIN;
        for(int i=0;i<nums.size();i++){
            current+=nums[i];
            maxtillnow=max(current,maxtillnow);
            if(current<0) current=0;
        }
    
        return maxtillnow;
    }
};