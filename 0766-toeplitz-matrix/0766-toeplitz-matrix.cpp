class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        bool flag=true;
        int row=matrix[0].size();
        int col=matrix.size();
        for(int i=0;i<col-1;i++){
          
            for(int j=0;j<row-1;j++){
                if(matrix[i][j]!=matrix[i+1][j+1]){
                    return false;
                    break;
                }
            }
        }
        return true;
    }
};