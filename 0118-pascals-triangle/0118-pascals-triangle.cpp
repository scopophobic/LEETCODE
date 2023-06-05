class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        if(numRows == 1) return {{1}};
        ans.push_back({1});
        ans.push_back({1,1});
        int n=1;
        for(int i=0;i<numRows-2;i++){
            vector<int>temp;
            int o=ans[n].size();
            // int a=0;
            temp.push_back(1);
            for(int j=0;j<o-1;j++){
                
                int a=ans[n][j]+ans[n][j+1];
                temp.push_back(a);

            }
            temp.push_back(1);
            ans.push_back(temp);
            n++;
        }
        return ans;
    }
};