class Solution {
public:
// #define N 4
void transpose(vector<vector<int>>A,vector<vector<int>>B,int N)
{
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            B[i][j] = A[j][i];
}

    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int>maxx;
        vector<int>maxy;

        for(int i=0;i<grid.size();i++){
            int max=0;
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]>max)max=grid[i][j];
            }
            maxx.push_back(max);
        }
        // vector<vector<int>>temp(grid.size());
        // transpose(grid,temp,grid.size());
        // for(int i=0;i<temp.size();i++){
        //     int max=0;
        //     for(int j=0;j<temp[i].size();j++){
        //         if(grid[i][j]>max)max=grid[i][j];
        //     }
        //     maxy.push_back(max);
        // }
        for(int i=0;i<grid.size();i++){
            int max=0;
            for(int j=0;j<grid[i].size();j++){
                if(grid[j][i]>max)max=grid[j][i];
            }
            maxy.push_back(max);
        }
        int ans=0;
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                int mo=min(maxx[i],maxy[j]);
                ans+=mo-grid[i][j];
            }
        }
        return ans;
    }
};