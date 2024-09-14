class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        vector<int>temp = nums;
        sort(temp.begin(),temp.end());
        int m = temp[n-1];
        int res=1;
        int ans=1;
        int flag = 0;
        for(int i=0;i<n-1;i++){
            if(nums[i]==m){
                if(nums[i]==nums[i+1])res++;
            }
            else{
                res=1;
                continue;
            }
            ans = max(res,ans);
            
            
        }
        
        return ans;
        
    }
};