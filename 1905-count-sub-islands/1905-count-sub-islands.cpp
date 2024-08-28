class Solution {
public:
    
    
    bool check;
    void dfs(vector<vector<int>> &grid1 ,vector<vector<int>> &grid2 , int i , int j){
        
        if (i < 0 || j < 0 || i >= grid1.size() || j >= grid1[0].size() || grid2[i][j] != 1) return;


        
        
        if (grid1[i][j] != grid2[i][j]) {
            check = false;
        }
        
        grid2[i][j] = -1;
        
        dfs(grid1,grid2,i-1,j);
        dfs(grid1,grid2,i,j-1);
        dfs(grid1,grid2,i+1,j);
        dfs(grid1,grid2,i,j+1);
        
        
    }
    
 
    
    
    
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int b=grid2[0].size();
        int l=grid2.size();
        int ans=0;

        for(int i = 0;i<l;i++){
            for(int j=0;j<b;j++){
                if(grid2[i][j]==1){
                    check = true;
                    dfs(grid1,grid2,i,j);

                    
                    if(check) ans++;
                    

                    
                }
            }
                    
        }
        return ans;
    }
};