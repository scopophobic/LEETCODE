class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int a = obstacleGrid.size();
        int b = obstacleGrid[0].size();
        vector<vector<long long>> dp(a, vector<long long>(b, 0));

        // Base case: if the starting cell is not an obstacle, there is 1 way to reach it
        dp[0][0] = (obstacleGrid[0][0] == 0) ? 1 : 0;

        // Fill the first column
        for (int i = 1; i < a; ++i) {
            if (obstacleGrid[i][0] == 0) {
                dp[i][0] = dp[i - 1][0];
            }
        }

        // Fill the first row
        for (int j = 1; j < b; ++j) {
            if (obstacleGrid[0][j] == 0) {
                dp[0][j] = dp[0][j - 1];
            }
        }

        // Fill the rest of the DP array
        for (int i = 1; i < a; ++i) {
            for (int j = 1; j < b; ++j) {
                if (obstacleGrid[i][j] == 0) {
                    dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
                }
            }
        }

        return dp[a - 1][b - 1];
    }
};