class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector <int> al(26);
        
        for(char c : magazine)
            al[c- 'a']+=1;
        
        for(char c: ransomNote){
            al[c-'a']-=1;
            if(al[c-'a'] < 0) return false;
        }
        return true;
    }
    
};