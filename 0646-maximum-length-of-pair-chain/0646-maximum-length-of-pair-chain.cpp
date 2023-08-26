class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        int count =0,n=pairs.size(),m=pairs[0].size();
        // int j=0;
        int max=INT_MIN,ans=0;
        std::sort(pairs.begin(), pairs.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
            return a[1] < b[1];
        });
        for(int i=0;i<n;i++){
            cout<<pairs[i][0]<<" "<<pairs[i][1]<<endl;
        }
        for (const auto& pair : pairs) {
            if (max < pair[0]) {
                max = pair[1];
                ans++;
            }
        }
        // int o=0;
        // while(o<n){
        //     j=o;
        //     while(j<n){
        //         for(int i=j+1;i<n;i++){
        //             if(pairs[j][1]<pairs[i][0]){
        //                 count++;
        //                 j=i;
        //             }
        //         }
        //         if(max<count) max=count;
        //         count=0;
        //         j++;
        //     }
        //     o++;
        // }
        // if(max==1) max++;
        
        return ans;
    }
};