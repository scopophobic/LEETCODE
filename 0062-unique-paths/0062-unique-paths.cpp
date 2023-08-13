class Solution {
public:
    void paths(int i,int j, int a,int b,int &ans){
        if (i >= a || j >= b) {
            return;
        }
        
        if(i==a-1 and j==b-1){
            ans++;
            return;
        }
        
        
        paths(i,j+1,a,b,ans);
   
        
        paths(i+1,j,a,b,ans);
        
        
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m+1,vector<int>(n+1,0));
        dp[0][1] = 1;
        for(int i = 1 ; i <= m ; ++i)
            for(int j = 1 ; j <= n ; ++j)
                dp[i][j] = dp[i-1][j]+dp[i][j-1];
        return dp[m][n];
        
    }
};

