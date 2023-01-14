class Solution {
public:
    bool isAnagram(string s, string t) {
        //------map-----------//
//         map<char,int>mp,np;
//         for(int i=0;i<s.size();i++) mp[s[i]]++;
//         for(int i=0;i<s.size();i++) np[t[i]]++;
        
//         for(int i=0;i<s.size();i++){
//             if(mp[s[i]]!=np[s[i]]) return false;
//         }
//         for(int i=0;i<t.size();i++){
//             if(mp[t[i]]!=np[t[i]]) return false;
//         }
//         return true;
        //-----vector------//
        vector<int>a(26,0);
        vector<int>b(26,0);
        for(int i=0;i<s.size();i++) a[s[i]-'a']++;
        for(int i=0;i<t.size();i++) b[t[i]-'a']++;
        
        for(int i=0;i<26;i++) {
            if(a[i]!=b[i]) return false;
        }
        
        return true;
        
    }
};