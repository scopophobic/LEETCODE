class Solution {
public:

    int coinChange(vector<int>& coins, int amount) {
        
        
        vector<int>dp(amount+1, INT_MAX);
        int n = coins.size();
        dp[0]=0;
        for(int i=1;i<=amount;i++){
            if(i==0) dp[i]==0;
            else{
                if(dp[i]==-1) dp[i]=0;
                for(auto it : coins){
                    if(it<=i and dp[i-it]!=INT_MAX) dp[i] = min(dp[i] , dp[i-it]+1);
                }
            }
        }
        // for(int i =0;i<20;i++) cout<<dp[i]<<" ";
        return dp[amount] == INT_MAX ? -1 : dp[amount];
        
    }
};