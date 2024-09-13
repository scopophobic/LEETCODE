class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>ans;
        for(auto range:queries){
            int start=range[0],end=range[1];
            

            int temp=0;
            for(int i=start;i<=end;i++){

                temp^=arr[i];
                // cout<<x_or<<" ";
            }
            cout<<endl;
            ans.push_back(temp);
        }
        return ans;
    }
};