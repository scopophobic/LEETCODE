class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>s;
        int n = operations.size();
        
        for(int i = 0 ; i < n ; i++){
            string topo=operations[i];
            if(topo=="C") s.pop();
            else if(topo=="D") {
                int p=(s.top())*2;
                s.push(p);
            }
            else if(topo=="+") {
                int a = s.top();
                s.pop();
                int b = s.top();
                s.push(a);
                s.push(a + b);
            }
            else {
                int o = stoi(topo);
                s.push(o);
            }
            
        }
        int ans=0;
        while(!s.empty()){
            int temp=s.top();
            ans+=temp;
            s.pop();
        }
        return ans;
    }
};