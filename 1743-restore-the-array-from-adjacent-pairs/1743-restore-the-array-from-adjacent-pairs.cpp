class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        map<int,vector<int>>mp;
        int n=adjacentPairs.size();
        for(int i=0;i<n;i++){
            mp[adjacentPairs[i][0]].push_back(adjacentPairs[i][1]);
            mp[adjacentPairs[i][1]].push_back(adjacentPairs[i][0]);
        }
        int s,c=0;
        
        for(auto it : mp){
            if(it.second.size()==1){
                s=it.first;
            }
            c++;
        }
        
        // cout<<s;
        set<int>a;
        a.insert(s);
        vector<int>ans;
        int left = -1000000;
        int i=0,l=0;
        while(c--){
            // cout<<s<<" ";
            
            // cout<<s<<" ";
            // for(int i=0;i<mp[s].size();i++){
            //     if (a.find(mp[s][i]) == a.end()){
            //         a.insert(mp[s][i]);
            //         // cout<<mp[s][i]<<" ";
            //         s=mp[s][i];
            //         cout<<s;
            //     }
            // }
            
            // ans.push_back(s);
            
            
            // if (a.find(mp[s][0]) == a.end()) {
            //     a.insert(mp[s][0]);
            //     s=mp[s][0];
            // }
            // else if (mp[s].size()==2 and a.find(mp[s][1]) == a.end()) {
            //     a.insert(mp[s][1]);
            //     s=mp[s][1];
            // }
            if(mp[s].size()==1)l++;
            int newval = (l<2 and mp[s][0] == left) ? mp[s][1] : mp[s][0];
            // ans.push_back(newval);
            ans.push_back(s);
            left=s;
            s=newval;
            



            
           
        }
        // vector<int> ans(a.begin(), a.end());
        return ans;
        
    }
};