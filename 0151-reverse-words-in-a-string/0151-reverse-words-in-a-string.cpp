class Solution {
public:
    string reverseWords(string s) {
        string temp = "";
        vector<string>str;
        for(auto it : s){
            if(it == ' '){
                if(temp.empty() or temp == " ") continue;
                str.push_back(temp);
                temp = "";
                continue;
            }
            temp+= it;
        }
        str.push_back(temp);
        
        for(auto it : str) cout<<it;
        cout<<"\n"<<str.size();
        string ans = "";
        reverse(str.begin(),str.end());
        int i = 0, n = str.size();
        for(auto it : str){
            if (it == " " or it == ""){i++; continue;}
            ans += it;
            if(i != n-1) ans += ' ';
            i++;
        }
        cout<<endl;
        return ans;
        
    }
};