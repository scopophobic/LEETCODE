class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>>zero;
        int n=matrix.size();
        zero=matrix;
        for(int i=0;i<n;i++){
            int m=matrix[0].size();
            // vector<int>temp;
            for(int j=0;j<m;j++){
                if(zero[i][j]==0){
                    // temp.push_back(i);
                    // temp.push_back(j);
                    for(int k=0;k<m;k++) matrix[i][k]=0;
                    for(int k=0;k<n;k++) matrix[k][j]=0;
                }
            }
            // zero.push_back(temp);
        }
        for(int i=0;i<zero.size();i++){
            for(int j=0;j<zero[0].size();j++){
                cout<<zero[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    
    
};