class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        
        vector<int>ans;
        for(auto it : queries){
            int s = it[0];
            int e = it[1];
            // cout<<s<<" : "<<e<<endl;
            int temp = 0;
            for(int i=s;i<=e;i++){
                temp ^= arr[i];
            }
            
            ans.push_back(temp);
        }
        
        return ans;
        
    }
};