class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <int> s;
        int result=0;
        for(auto it : tokens){
            string ch = it;
            if(ch == "+" || ch == "-" || ch == "/" || ch == "*"){
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                // cout<<a<<" "<<b;
                char c=ch[0];
                switch (c) {
                    case '+':
                        result = b + a;
                        break;
                    case '-':
                        result = b - a;
                        break;
                    case '*':
                        result = b * a;
                        break;
                    case '/':
                        result = b / a;
                        break;
                }
                s.push(result);
            }
            else{
                int n = stoi(ch);
                s.push(n);
                // cout<<"---";
            }
            // cout<<result<<" \n";
            
        
                
        }
            if(!s.empty()) result=s.top();
           s.pop();
         return result;
    }
};