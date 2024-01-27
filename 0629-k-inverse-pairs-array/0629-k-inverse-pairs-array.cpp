class Solution {
public:
    int kInversePairs(int n, int k) {
        vector<int>dp(k+1,0);
        const int MOD=int(1e9+7);
        dp[0]=1;
        
        for(int i = 1 ;i <= n ; i ++){
            vector<int>cur(k+1,0);
            long long int total=0;
            for (int j = 0; j <= k; j++) {
                total = (total + dp[j]) % MOD;
                if (j >= i) {
                    total = (total - dp[j - i] + MOD) % MOD;
                }
                cur[j] = total;
            }
            dp=cur;
        }
        
        return dp[k]%MOD;
        
            
    }
};