class Solution {
public:
    
    
    bool check;
    void dfs(vector<vector<int>> &grid1 ,vector<vector<int>> &grid2 , int i , int j,int l,int b){
        
        if (i < 0 || j < 0 || i >= l || j >= b || grid2[i][j] != 1) return;


        
        
        if (grid1[i][j] != grid2[i][j]) {
            check = false;
        }
        
        grid2[i][j] = -1;
        
        dfs(grid1,grid2,i-1,j,l,b);
        dfs(grid1,grid2,i,j-1,l,b);
        dfs(grid1,grid2,i+1,j,l,b);
        dfs(grid1,grid2,i,j+1,l,b);
        
        
    }
    
 
    
    
    
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int b=grid2[0].size();
        int l=grid2.size();
        int ans=0;

        for(int i = 0;i<l;i++){
            for(int j=0;j<b;j++){
                if(grid2[i][j]==1){
                    check = true;
                    dfs(grid1,grid2,i,j,l,b);

                    
                    if(check) ans++;
                    

                    
                }
            }
                    
        }
        return ans;
    }
};