class Solution {
public:
    bool buddyStrings(string s, string goal) {
        int n=s.size();
        int c=unordered_set<char>(s.begin(), s.end()).size();;
        map<char,int>mp;
        // int c=0;
        // for(int i=0;i<n;i++) mp[s[i]]++;
        // for(auto it:mp) c++;
     
        
        if(n!=goal.size()) return false;
        cout<<c;
        if(s==goal && c<goal.size()) return true;
        vector<int>in;
        for(int i=0;i<n;i++){
            if(s[i]!=goal[i]) in.push_back(i);
            if (in.size() > 2) return false;
        }
        return in.size() == 2 &&
               s[in[0]] == goal[in[1]] &&
               s[in[1]] == goal[in[0]];   
    }
};