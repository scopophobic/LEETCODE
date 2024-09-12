class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<set<char>>newCheck;
        
        set<char>s;
        
        for(auto it : allowed) s.insert(it);
        
        int ans=0;
        
        for(auto it : words){
            int flag =1;
            for(auto i : it) {
                if(s.find(i)==s.end()){
                    flag = 0;
                    break;
                }
                
            }
            if(flag) ans++;
            
        }
        return ans;
    }
};