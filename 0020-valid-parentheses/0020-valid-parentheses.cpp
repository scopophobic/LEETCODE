class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        if(s.length()%2!=0) return false;
        for(int i=0;i<s.size();i++){
            cout<<s[i]<<endl;
            char top;
            if(s[i]==')') top='(';
            if(s[i]=='}') top='{';
            if(s[i]==']') top='[';
            
               
            
            
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')  st.push(s[i]);
            
            else{
                if(!st.empty() and st.top() == top) st.pop();
                else return false;
            }
            
            
        }
        if(st.empty()) return true;
        return false;
    }
};