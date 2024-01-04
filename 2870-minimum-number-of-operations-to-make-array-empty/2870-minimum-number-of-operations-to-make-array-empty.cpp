class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int,int>mp;
        
        for(auto it : nums) mp[it]++;
        
    
        int ans=0;
        for(auto it : mp){
            int temp=it.second;
            if(temp == 1) return -1;
            ans+=temp/3;
            if(temp%3)ans++;
        }
        return ans;
        
    }
};