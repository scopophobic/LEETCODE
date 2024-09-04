#include <vector>
#include <set>
#include <string>
#include <map>
#include <algorithm>

class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {

        map<int, char> direct;
        direct[1] = 'N';
        direct[2] = 'E';
        direct[3] = 'S';
        direct[4] = 'W';
        

        set<string> obstacleSet;
        for (const auto& obs : obstacles) {
            obstacleSet.insert(to_string(obs[0]) + "_" + to_string(obs[1]));
        }
        
        int n = commands.size();
        int di = 1; 
        int x = 0, y = 0; 
        int maxDistSq = 0;
        
        for (int i = 0; i < n; i++) {
            int step = commands[i];
            char way = direct[di];
            
            if (step == -1) {
                di++;
                if (di > 4) di = 1;
            } else if (step == -2) {
                di--;
                if (di < 1) di = 4; 
            } else if (step > 0) {
                for (int s = 0; s < step; s++) {
                    int nx = x, ny = y;
                    
                    if (way == 'N') ny++;
                    if (way == 'E') nx++;
                    if (way == 'S') ny--;
                    if (way == 'W') nx--;
                    

                    if (obstacleSet.find(to_string(nx) + "_" + to_string(ny)) != obstacleSet.end()) {
                        break;
                    }
                    

                    x = nx;
                    y = ny;
                    

                    maxDistSq = max(maxDistSq, x * x + y * y);
                }
            }
        }
        
        return maxDistSq;
    }
};
