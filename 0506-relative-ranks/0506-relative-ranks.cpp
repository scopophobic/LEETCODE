class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string>ans;
        
        vector<int>temp = score;
        sort(temp.begin(),temp.end());
        reverse(temp.begin(),temp.end());
        map<int,int>mp;
        int n = score.size();
        
        for(int i = 1;i<=n;i++) mp[temp[i-1]]= i;

        
        // int x0 = temp[0];
        // int x1 = temp[1];
        // int x2 = temp[2];
        
        int i = 1;
        
        for(auto it : score){
            i++;
            if(mp[it] == 1) ans.push_back("Gold Medal");
            else if(mp[it] == 2) ans.push_back("Silver Medal");
            else if(mp[it] == 3) ans.push_back("Bronze Medal");
            else {
                string s = to_string(mp[it]);
                ans.push_back(s);
            }
            
            
        }
            
            
        
        return ans;
    }
};