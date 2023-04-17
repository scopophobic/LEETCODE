class Solution {
public:
    string remove (string s){
        for(int i=0;i<s.size();i++){
            char c= s[i];
            if (!isalnum(c)) {
                s.erase(i, 1);
                i--;
            }
        }
        return s;
    }
    bool isPalindrome(string s) {
        s=remove(s);
        // int o='9';
        // cout<<o;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout<<s<<endl;
        int n=s.size();
        int i=0, j = n-1;
        while(i<=j){
            if(s[i]!=s[j] ) return false;
            i++,j--;
        }
        return true;
    }
};