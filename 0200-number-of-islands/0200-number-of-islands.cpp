class Solution {
public:
    void dfs(vector<vector<char>>& grid,int i,int j){
        int m = grid.size(); // 4 
        int n = grid[0].size(); // 5
        
        if(i>=m || j>=n || i<0 || j<0 || grid[i][j] == '0') return;
        
        grid[i][j] = '0';
        
        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
        dfs(grid,i,j-1);
        dfs(grid,i,j+1);
        
    }
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size(); // 4 
        int n = grid[0].size(); // 5
        int ans = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == '1'){
                    ans++;
                    dfs(grid,i,j);
                }
            }
        }
        return ans;
    }
};