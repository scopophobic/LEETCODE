class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mp;
        set<int>s;
        for(auto it : arr){
            mp[it]++;
            s.insert(it);
        }
        vector<int>temp;
        for(auto it : mp){
            cout<<it.first<<": "<<it.second<<endl;
            temp.push_back(it.second);
        }
        sort(temp.begin(),temp.end());
        for(int i = 0 ; i < temp.size()-1;i++){
            if(temp[i]==temp[i+1]) return false;
        }
        
        return true;
    }
    
};