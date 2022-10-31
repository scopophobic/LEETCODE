class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        bool flag=true;
        int col=matrix.size();
        for(int i=1;i<col;i++){
            int row=matrix[i].size();
            for(int j=1;j<row;j++){
                if(matrix[i][j]!=matrix[i-1][j-1]){
                    return false;
                    break;
                }
            }
        }
        return true;
    }
};