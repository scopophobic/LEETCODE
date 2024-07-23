class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int>temp;
        for(auto it : nums) temp[it]++;
        
        map<int,vector<int>>mp;
        
        for(auto it:temp){
            mp[it.second].push_back(it.first);
        }
        vector<int>ans;
        for(auto it : mp){
            cout<<it.first<<": ";
            reverse(it.second.begin(),it.second.end());
            for(auto i : it.second){
                cout<<i<<" ";
                for(int ik=0;ik<it.first;ik++) {
                    ans.push_back(i);
                }
                
            }
            
            cout<<endl;
        }
        
        return ans;
    }
};