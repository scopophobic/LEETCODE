vector<int>dp(1000,-1);
class Solution {


public:
    int dfs (int i, int n,string s,set<string>words){
        if(dp[i]!=-1) return dp[i];
        
        int res = 1 + dfs(i+1,n,s,words);
        
        for(int j=i;j<n;j++){
            string temp = s.substr(i, j - i + 1);
            if(words.find(temp)!=words.end())
                res = min(res, dfs(j + 1, n, s, words));
        }
        dp[i] = res;
        
        return res;
        
    }
    int minExtraChar(string s, vector<string>& dictionary) {
        set<string> words(dictionary.begin(), dictionary.end()); 
        fill(dp.begin(), dp.end(), -1);
        dp[s.size()] = 0;
        return dfs(0,s.size(),s,words);
    }
};