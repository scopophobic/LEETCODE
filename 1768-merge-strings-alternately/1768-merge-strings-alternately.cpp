class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int a=word1.size(),b=word2.size();
        int n=min(a,b);
        string ans="";
        for(int i = 0 ;i< n ; i++){
            if(word1[i]) ans.push_back(word1[i]);
            if(word2[i]) ans.push_back(word2[i]);
        }
        if(a>b) for(int i=n;i<a;i++) ans.push_back(word1[i]);
        
        else if (b>a) for(int i=n;i<b;i++) ans.push_back(word2[i]);
        
        return ans;
    }
};