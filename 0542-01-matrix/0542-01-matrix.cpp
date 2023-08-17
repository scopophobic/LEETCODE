class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size(),t=n+m;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0) continue;
                int top=t, left=t;
                if(i-1>=0) top=mat[i-1][j];
                if(j-1>=0) left=mat[i][j-1];
                mat[i][j]=min(top,left)+1;
            }
        }
        
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                if(mat[i][j]==0) continue;
                int top=t, left=t;
                if(i+1<n) top=mat[i+1][j];
                if(j+1<m) left=mat[i][j+1];
                mat[i][j]=min(mat[i][j],min(top,left)+1);
            }
        }
        
        return mat;
    }
};