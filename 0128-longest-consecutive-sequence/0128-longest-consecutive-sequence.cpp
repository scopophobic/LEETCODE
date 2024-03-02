class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(!nums.size()) return {};
        // vector<int> ans;
        int sum = 0;
        int ans = 0;
        for(int i = 0 ;i < nums.size()-1; i++){
            int temp = abs(nums[i+1]-nums[i]);
            if(temp ==1) {
                sum++;
                ans = max(ans,sum);
            }
            else if (temp ==0 ) continue;
            else {
                sum = 0;
            }
        }
        for(int i =0;i<nums.size();i++){
            cout<<nums[i]<<" ";
        }
        
        return ans+1;
    }
};