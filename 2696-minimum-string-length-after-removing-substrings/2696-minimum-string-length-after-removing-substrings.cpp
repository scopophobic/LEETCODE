class Solution {
public:
    int minLength(string s) {
        stack<char>st;

        for(auto it : s){
            if(!st.empty()){
                string temp = "";
                temp+= st.top();
                temp+=it;
                if(temp == "AB" or temp=="CD") {
                    st.pop();
                    continue;
                }
                
            }
            st.push(it);
        }

        return st.size();
    }
};