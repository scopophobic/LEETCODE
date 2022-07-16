class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> c = {{'I', 1},{'V', 5},{'X', 10},{'L', 50},{'C', 100} ,{'D',500},{'M',1000}};  
        int out=0;
        for(int i=0;i<s.size();i++){
            if(i==0 || c[s[i]]<=c[s[i-1]]){
                out+=c[s[i]];
            }
            else{
                out+=c[s[i]]-2*c[s[i-1]];
            }
        }
        return out;
    }
};