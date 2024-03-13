class Solution {
public:
    
    
    int climbStairs(int n) {
        vector<int>dp(50);

        
        for(int i=0;i<=n;i++){
            if(i==0){
                dp[i]=1;
            }
            else{
                dp[i]=0;
                for(int j=1;j<=2;j++){
                    if(i-j >= 0){
                        dp[i] += dp[i-j];
                    }
                }
            }
        }
        
        
        // for(auto it : ans) cout<<it<<" ";
        return dp[n];
    }
};