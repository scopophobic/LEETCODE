class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>>ans;
        
        map<int,int>mp;
        
        for(auto it : nums) mp[it]++;
        vector<int>nk;
        for(auto it : mp) nk.push_back(it.first);
        int flag=1;
        while(flag){
            vector<int>temp;
            int n=0;
            for(int i=0;i<nk.size();i++){
                
            cout<<mp[nk[i]]<<" ";
               if(mp[nk[i]]) {
                   temp.push_back(nk[i]);
                   mp[nk[i]]--;
               }
                else n++;
                
                
            }
            // for (auto it : temp) cout<<it<<" ";
            if(n==nk.size()) break;
            ans.push_back(temp);
            
            
        }
        
        
        return ans;
    }
};