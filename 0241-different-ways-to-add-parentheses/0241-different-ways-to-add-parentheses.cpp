class Solution {
public:
    
    vector<int> ways(string exp){
        
        vector<int>ans;
        int n = exp.size();
        for(int i=0;i<n;i++){
            int ch = exp[i];
            
            if(ch=='+' || ch=='-' || ch=='*'){
                vector<int> left = ways(exp.substr(0,i));
                vector<int> right = ways(exp.substr(i+1,n-1));
                
                for (int l : left) {
                    for (int r : right) {
                        if (ch == '+') {
                            ans.push_back(l + r);
                        } 
                        else if (ch == '-') {
                            ans.push_back(l - r);
                        } 
                        else if (ch == '*') {
                            ans.push_back(l * r);
                        }
                    }
                }
            }
        }
        
        if(ans.empty()) ans.push_back(stoi(exp));
        
        return ans;
    }
    
    vector<int> diffWaysToCompute(string expression) {
        return ways(expression);
    }
};