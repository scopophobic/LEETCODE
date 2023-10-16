class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>mat;
        mat.push_back({1});
        mat.push_back({1,1});
        int n=rowIndex;
        if(n<=1)return mat[n];
        for(int i=1;i<n;i++){
            vector<int>temp;
            temp.push_back(1);
            for(int j=0;j<mat[i].size()-1;j++){
                temp.push_back(mat[i][j]+mat[i][j+1]);
            }
            temp.push_back(1);
            mat.push_back(temp);
        }
        
        return mat[n];
    }
};