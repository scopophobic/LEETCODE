class Solution {
public:
//     bool dfs(vector<int>arr,int ind, int n, int jump){
        
//     }
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int tar= n-1;
        
        for(int i =n-2 ; i>=0; i--){
            if(i+nums[i] >= tar){
                tar = i; 
            }
        }
        
        if(tar != 0 ) return false;
        
        return true;
    }
};