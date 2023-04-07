class Solution {
public:
    void dfs(vector<vector<int>>& A, int i, int j) {
    int m = A.size(), n = A[0].size();
    if (i < 0 || j < 0 || i >= m || j >= n || A[i][j] != 1) {
        return;
    }
    A[i][j] = -1;
    dfs(A, i+1, j);
    dfs(A, i-1, j);
    dfs(A, i, j+1);
    dfs(A, i, j-1);
}

int numEnclaves(vector<vector<int>>& A) {
    int m = A.size(), n = A[0].size();
    
    // Perform DFS on boundary squares
    for (int i = 0; i < m; i++) {
        dfs(A, i, 0);
        dfs(A, i, n-1);
    }
    for (int j = 0; j < n; j++) {
        dfs(A, 0, j);
        dfs(A, m-1, j);
    }
    
    // Traverse the grid and count non-marked land squares
    int count = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] == 1) {
                count++;
            }
        }
    }
    
    return count;
}

    
    
};