class Solution {
public:
    int lengthOfLastWord(string s) {
        int n= s.size(), flag = 1,ans=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]==' ' and !flag) break;
            else if(s[i]==' ') continue;
            
            else{
                ans++;
                flag = 0;
            }
            
        }
        return ans;
    }
};