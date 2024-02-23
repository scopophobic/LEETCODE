class Solution {
public:

    void dfs(vector<vector<char>>& grid , int i , int j,int l,int b){
        
        if (i < 0 || j < 0 || i >= l || j >= b || grid[i][j] != '1') return;
        grid[i][j]='0';
        dfs(grid,i-1,j,l,b);
        dfs(grid,i,j-1,l,b);
        dfs(grid,i+1,j,l,b);
        dfs(grid,i,j+1,l,b);
        
        
    }
    int numIslands(vector<vector<char>>& grid) {
        int b=grid[0].size();
        int l=grid.size();
        int ans=0;
        for(int i = 0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
  
                if(grid[i][j]=='1'){
                    dfs(grid,i,j,l,b);
                    ans++;
                }
            }
                    
        }
        return ans;
    }
    
};
