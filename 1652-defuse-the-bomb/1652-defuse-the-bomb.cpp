class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int>ans(n);
        if(k == 0) return ans;
        for(int i=0;i<n;i++){
            int sum = 0;
            if(k>0) {
                for(int j=0;j<abs(k);j++){
                    int id = (i+j+1)%n;
                    sum += code[id];
                    cout<<id<<" ";
                }
            }
            if(k<0){
                for(int j=1;j<=abs(k);j++){
                    // int id = (100-j-i)%n;
                    int id = i-j;
                    if(id < 0) id = n+id;
                    sum += code[id];
                    cout<<id<<" ";
                }
            }
            ans[i] = sum;
            cout<<endl;
        }
        
        
        return ans;
    }
};