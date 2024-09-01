class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>>ans;
        int x = original.size();
        int o=0;
        if(n*m != x) return {};
        for(int i=0;i<m;i++){
            vector<int>temp;
            for(int j=0;j<n;j++){
                temp.push_back(original[o]);
                o++;
            }
            

            ans.push_back(temp);
        }
        
        return ans;
    }
};