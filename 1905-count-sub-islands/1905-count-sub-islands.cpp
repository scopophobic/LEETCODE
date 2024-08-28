class Solution {
public:
    
    
    bool check;
    void dfs(vector<vector<int>> &grid1 ,vector<vector<int>> &grid2 , int i , int j,int l,int b,vector<pair<int,int>>&temp){
        
        if (i < 0 || j < 0 || i >= l || j >= b || grid2[i][j] != 1) return;

        temp.push_back({i,j});
        
        
        if (grid1[i][j] != grid2[i][j]) {
            check = false;
        }
        
        grid2[i][j] = -1;
        
        dfs(grid1,grid2,i-1,j,l,b,temp);
        dfs(grid1,grid2,i,j-1,l,b,temp);
        dfs(grid1,grid2,i+1,j,l,b,temp);
        dfs(grid1,grid2,i,j+1,l,b,temp);
        
        
    }
    
    
       bool isSubIsland(vector<pair<int,int>>& temp, vector<vector<int>>& grid1) {
        for (auto& p : temp) {
            if (grid1[p.first][p.second] != 1) {
                return false;
            }
        }
        return true;
    }
    
    
    
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int b=grid2[0].size();
        int l=grid2.size();
        int ans=0;

        for(int i = 0;i<grid2.size();i++){
            for(int j=0;j<grid2[i].size();j++){
                if(grid2[i][j]==1){
                    check = true;
                    vector<pair<int,int>>temp;
                    dfs(grid1,grid2,i,j,l,b,temp);

                    
                    if(check) ans++;
                    
                    
                    
                }
            }
                    
        }
        return ans;
    }
};