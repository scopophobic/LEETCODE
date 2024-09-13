class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>ans;
        for(auto range:queries){
            int start=range[0],end=range[1];
            if(start==end){
                ans.push_back(arr[start]);
                continue;
            }
            int x_or=arr[start]^arr[start+1];
            // int x_or = 0;
            int temp=0;
            for(int i=start+2;i<=end;i++){
                temp=x_or;
                x_or^=arr[i];
                // cout<<x_or<<" ";
            }
            cout<<endl;
            ans.push_back(x_or);
        }
        return ans;
    }
};