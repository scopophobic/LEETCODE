class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        vector<int>temp = nums;
        sort(temp.begin(),temp.end());
        int m = temp[n-1];
        int res=0;
        int ans=0;
        int flag = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==m){
                if(flag) res++;
                if(!flag){
                    flag = 1;
                    res++;
                }
            }
            else {flag = 0;res = 0;}
            
            ans = max(ans,res);
            
        }
        
        return ans;
        
    }
};