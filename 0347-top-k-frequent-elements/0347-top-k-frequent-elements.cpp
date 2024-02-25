class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        
        for(auto it : nums ){
            mp[it]++;
        }
        
        map<int,vector<int>>main;
        int n = 0;
        for(auto it : mp){
            main[it.second].push_back(it.first);
            n++;
        }
        vector<int>ans;
        for(auto it : main){
            cout<<endl<<it.first<<": ";
            for(auto jt : it.second){
                cout<<jt<<" ";
            }
        }
        
        vector<int>temp;
        for(auto it : main){
            for(auto jt : it.second){
                temp.push_back(jt);
            }
        }
        
        for(int i = 0 ;i< k;i++){
            ans.push_back(temp[temp.size()-i-1]);
        }
        
        
        return ans;
        
        
        
    }
};