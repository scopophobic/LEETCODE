class Solution {
public:
    int countPalindromicSubsequence(string s) {
        map<char,pair<int, int>>mp;
        for(int i=0; i<26; i++){
            mp['a'+i].first=-1;
            mp['a'+i].second=-1;}
        for(int i=0;i<s.size() ;i++ ){
            if(mp[s[i]].first==-1) mp[s[i]].first=i;}
        for(int i=s.size()-1;i>=0 ;i--){
            if(mp[s[i]].second==-1) mp[s[i]].second=i;}
        
        
        int ans=0;
        for(auto it: mp){
            if(it.second.first==-1) continue;
 
            int a=it.second.first,b=it.second.second;
            set<char>se;
            for(int i=a+1;i<=b-1;i++) se.insert(s[i]);
            ans+=se.size();
        }
        return ans;
    }
};