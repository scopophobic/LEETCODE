class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        map<int,vector<int>>mp;
        int n=adjacentPairs.size();
        for(int i=0;i<n;i++){
            mp[adjacentPairs[i][0]].push_back(adjacentPairs[i][1]);
            mp[adjacentPairs[i][1]].push_back(adjacentPairs[i][0]);
        }
        int s;
        for(auto it : mp){
            if(it.second.size()==1){
                s=it.first;
                break;
            }
        }
        
        // cout<<s;
        set<int>a;
        int l=1;
        a.insert(s);
        vector<int>ans;
        while(l<=2){
            // cout<<s<<" ";
            ans.push_back(s);
            cout<<s<<" ";
            // for(int i=0;i<mp[s].size();i++){
            //     if (a.find(mp[s][i]) == a.end()){
            //         a.insert(mp[s][i]);
            //         // cout<<mp[s][i]<<" ";
            //         s=mp[s][i];
            //         cout<<s;
            //     }
            // }
            
            // ans.push_back(s);
            
            
            if (a.find(mp[s][0]) == a.end()) {
                a.insert(mp[s][0]);
                s=mp[s][0];
            }
            else if (mp[s].size()==2 and a.find(mp[s][1]) == a.end()) {
                a.insert(mp[s][1]);
                s=mp[s][1];
            }

            if(mp[s].size()==1) l++;
            
           
        }
        // vector<int> ans(a.begin(), a.end());
        return ans;
        
    }
};