class Solution {
public:
    int isPrefixOfWord(string sen, string word) {
        vector<string>s;
        string temp = "";
        int i = 0;
        for(auto it : sen){
            if(it == ' ' or i == sen.size()-1) {
                if(i == sen.size()-1) temp+=it;
                s.push_back(temp);
                temp = "";
                i++;
                continue;
                
            }
            temp+=it;
            i++;
        }        
        i = 0;
        for(auto it : s){
            cout<<it<<" \n";
            int check = 0;
            for(auto c : it){
                if(c == word[check]){
                    check++; 
                    continue;
                }else{break;}
                

            }
            cout<<i<<" "<<check<<" ";
            if(check == word.size()) return i+1;
            i++;
        }
        
        return -1;
    }
};