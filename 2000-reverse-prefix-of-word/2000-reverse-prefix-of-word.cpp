class Solution {
public:
    string reversePrefix(string word, char ch) {

        string ans = "";
        int flag = 1;
        for(auto c : word){
            ans+=c;
            if(flag && c == ch){
                reverse(ans.begin(), ans.end()); 
                flag = 0;
            }
            
        }
        
        return ans;
    }
};