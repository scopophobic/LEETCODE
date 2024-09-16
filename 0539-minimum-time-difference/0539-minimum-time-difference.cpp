class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        
        vector<int>arr;
        for(auto it : timePoints){
            string h = it.substr(0, 2);
            string m = it.substr(3, 2);
            int hour = stoi(h);
            int minute = stoi(m);
            int time = hour*60 + minute;
            
            arr.push_back(time);
            // arr.push_back(abs(time-1440));
        }
        
        
        
        sort(arr.begin(),arr.end());
        for(auto it : arr) cout<<it<<" ";
        int n = arr.size();
        int ans = INT_MAX;
        
        
        for (int i = 1; i < n; i++) {
            ans = min(ans, arr[i] - arr[i - 1]);
        }
        int t = abs(arr[n-1]-1440);
        ans = min(ans, arr[0]+t);
        
        return ans;
    }
};