class Solution {
public:
    string reverseParentheses(string s) {
        stack<char>ch;
        string ans = "";
        for(char it : s){
            if( it == ')'){
                string temp = "";
                while(!ch.empty() and ch.top() !='('){
                    // cout<<ch.top();
                    temp+=ch.top();
                    ch.pop();
                }
                if(!ch.empty())ch.pop();
                
                for(auto c : temp){
                    ch.push(c);
                }
            }
            else ch.push(it);     
        }
        
        while(!ch.empty()){
            ans+=ch.top();
            ch.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};