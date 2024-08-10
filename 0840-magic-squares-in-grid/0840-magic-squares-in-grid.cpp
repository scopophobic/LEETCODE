class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int n = grid.size(),m=grid[0].size();
        if(n<3 and m<3) return 0;
        int ans=0;
        
        for(int i=0;i<n-2;i++){

            for(int j=0;j<m-2;j++){
                set<int>temp;
                int row1,row2,row3,col1,col2,col3,d1,d2;
                // temp.insert(grid[i][j]);
                // temp.insert(grid[i][j+1]);
                // temp.insert(grid[i][j+2]);
                // temp.insert(grid[i+1][j]);
                // temp.insert(grid[i+1][j+1]);
                // temp.insert(grid[i+1][j+2]);
                // temp.insert(grid[i+2][j]);
                // temp.insert(grid[i+2][j+1]);
                // temp.insert(grid[i+2][j+2]);
                bool flag;
                
                for(int k=0;k<3;k++){
                    for(int o=0;o<3;o++){
                        if(grid[i+k][j+o] >9 or grid[i+k][j+o] ==0  ) {flag = false;continue;}
                        temp.insert(grid[i+k][j+o]);
                    }
                }
                
                if(temp.size()!=9) {flag = false;continue;}
                row1=grid[i][j]+grid[i][j+1]+grid[i][j+2];
                row2=grid[i+1][j]+grid[i+1][j+1]+grid[i+1][j+2];
                row3=grid[i+2][j]+grid[i+2][j+1]+grid[i+2][j+2];
                
                col1=grid[i][j]+grid[i+1][j]+grid[i+2][j];
                col2=grid[i][j+1]+grid[i+1][j+1]+grid[i+2][j+1];
                col3=grid[i][j+2]+grid[i+1][j+2]+grid[i+2][j+2];

                d1 = grid[i][j]+grid[i+1][j+1]+grid[i+2][j+2];
                d2 = grid[i][j+2]+grid[i+1][j+1]+grid[i+2][j];
                
                flag = row1 == row2 && row2 == row3 && row1 == col1 && col1 == col2 && col2 == col3 && row1 == d1 && d1 == d2;

                if(flag) ans++;
                cout<<"size of temp : "<<temp.size()<<endl;
                cout<<"ROWs : "<<row1<<" "<<row2<<" "<<row3<<endl;
                cout<<"COLs : "<<col1<<" "<<col2<<" "<<col3<<endl;
                cout<<"DIA  :"<<d1<<" "<<d2<<endl;
        
            }
            

            
            
        }
        
        return ans;
    }
};