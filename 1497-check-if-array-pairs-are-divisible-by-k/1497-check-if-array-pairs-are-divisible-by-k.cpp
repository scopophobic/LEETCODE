class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        map<int,int>mp;
        // vector<int>vec(k,0);
        for(auto it : arr){
            int temp = ((it%k)+k)%k;
            mp[temp]++;
            // vec[temp]++;
        }
        // for(auto it : mp) cout<<it.first<<" : "<<it.second<<endl;
        if(mp[0]%2 != 0) return false;
        for(int i=1;i<=k/2;i++){
            if(mp[i]!=mp[k-i]) return false;
            // if(vec[i]!=vec[k-i]) return false;
        }
        
        // for(auto it : mp){
        //     if(it.second%2 != 0) return false;
        // }

        
        // cout<<endl;
        // sort(arr.begin(),arr.end());
        // int i=0,j=arr.size()-1;
        // while(i<j){
        //     int tm = arr[i] + arr[j];
        //     if(tm%k != 0) --j;continue;
        //     else i++,j--;
        // }


        return true;
    }
};