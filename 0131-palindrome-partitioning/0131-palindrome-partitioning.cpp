class Solution {
public:
    void subset(string s,int i, int n, vector<string>temp, vector<vector<string>>&ans){
        if(i==n){
            ans.push_back(temp);
            return;
        }
        int start;
        for(start=i+1;start<=n;start++){
            string currentSub = s.substr(i, start - i);
            if(isPalindrome(currentSub)){
                temp.push_back(currentSub);
                subset(s,start,s.size(),temp,ans);
                temp.pop_back();
            }
            
            
        }
    }
    
    bool isPalindrome(const string &sub) {
        int left = 0, right = sub.length() - 1;
        while (left < right) {
            if (sub[left] != sub[right]) {
                return false;
            }
            ++left;
            --right;
        }
        return true;
    }
    
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> temp;
        subset(s,0,s.size(),temp,ans);
        return ans;
    }
};