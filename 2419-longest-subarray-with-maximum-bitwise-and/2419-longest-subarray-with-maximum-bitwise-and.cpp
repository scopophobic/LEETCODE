class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        vector<int>temp = nums;
        sort(temp.begin(),temp.end());
        int m = temp[n-1];
        int res=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(nums[i] == m){
                res++;
                int k = i+1;
                while(k<n and nums[k]==m){
                    res++;
                    k++;
                }
                ans = max(ans,res);
                res = 0;
                i = k+1;
            }
        }
        
        return ans;
        
    }
};