class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int>temp;
        temp.push_back(0);
        set<char>se({'a','e','i','o','u'});
        int t = 0;
        for(auto it : words){
            char s = it[0];
            char e = it[it.size()-1];
            cout<<s<<" "<<e<<endl;
            if(se.find(s)!=se.end() and se.find(e)!=se.end()) t++;
            
            temp.push_back(t);
        }
        for(auto it : temp) cout<<it<<" ";
        vector<int> ans;
        for(auto it : queries){
            int s = temp[it[0]];
            int e = temp[it[1]+1];
            
            cout<<s<<" "<<e<<endl;
            
            ans.push_back(abs(e-s));
            
        }
        
        return ans;
    }
};