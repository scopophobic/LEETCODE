class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        
        for(int i=0;i<n;i++){
            if(m[nums[i]]==1) continue;
            
            for(int j=i+1;j<n;j++){
                if(nums[i]==nums[j]){
                    if(abs(j-i)<=k) return true;
                }
            }
        }
        
        return false;
        
    }
};