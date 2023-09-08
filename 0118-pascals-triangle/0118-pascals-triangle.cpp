class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>pas;
        if(numRows == 1) return {{1}};
        pas.push_back({1});
        pas.push_back({1,1});
        
        for(int i=2;i<numRows;i++){
            vector<int>temp;
            temp.push_back(1);
            for(int j=0;j<i-1;j++){
                temp.push_back(pas[i-1][j]+pas[i-1][j+1]);
            }
            temp.push_back(1);
            pas.push_back(temp);
        }
        return pas;
        
    }
};