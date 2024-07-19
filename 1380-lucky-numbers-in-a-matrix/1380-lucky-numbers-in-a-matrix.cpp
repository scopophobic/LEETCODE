class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> minRow;  
        vector<int> maxCol(matrix[0].size(), INT_MIN);  
        

        for (auto& row : matrix) {
            minRow.push_back(*min_element(row.begin(), row.end()));
        }
        

        for (int j = 0; j < matrix[0].size(); ++j) {
            for (int i = 0; i < matrix.size(); ++i) {
                maxCol[j] = max(maxCol[j], matrix[i][j]);
            }
        }
        

        vector<int> ans;
        for (int i = 0; i < minRow.size(); ++i) {
            for (int j = 0; j < maxCol.size(); ++j) {
                if (minRow[i] == maxCol[j]) {
                    ans.push_back(minRow[i]);
                }
            }
        }
        
        return ans;
        }
    
    
};