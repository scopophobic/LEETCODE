class Solution {
public:
    string compressedString(string word) {
        int n = word.size(),c = 0;
        string ans = "";
        word += '0';
        for(int i=0;i<n;i++){
            if(word[i] == '0') break;
            if(c<8 and word[i] == word[i+1]){
                c++;
                continue;
            }
            else{
                c++;
                cout<<c<<" ";
                char ch = (char)(c+'0');
                cout<<(char)(c+'0')<<" ";
                ans += ch;
                ans += word[i];
                c=0;
            }
        }
        
        
        return ans;
    }
};