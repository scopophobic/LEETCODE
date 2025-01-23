class Solution {

public:

    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int m=isWater.size(), n=isWater[0].size(), row=0, col=0;
        queue<pair<int, int> > q;
        int dRow[] = { -1, 0, 1, 0 };
        int dCol[] = { 0, 1, 0, -1 };
        for (int i=0; i<m ; i++)
        {
            for (int j=0; j<n ; j++)
            {
                if (isWater[i][j]==1)
                {
                    q.push({i,j});
                    isWater[i][j]=0;
                }

                else{
                    isWater[i][j] = -1;
                }
            }
        }
        while (!q.empty()) {
            pair<int, int> cell = q.front();
            int x = cell.first;
            int y = cell.second;
 
            q.pop();
 
            for (int i = 0; i < 4; i++) {
 
                int adjx = x + dRow[i];
                int adjy = y + dCol[i];
 
                if (adjx >= 0 && adjy >= 0 && adjx < m && adjy < n && isWater[adjx][adjy] == -1) {
                    isWater[adjx][adjy] = max(isWater[x][y]+1, 1);
                    q.push({ adjx, adjy });
                    }
                }
            }
            return isWater;
        }

};