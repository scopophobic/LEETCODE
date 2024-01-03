class Solution {
public:
    int numberOfBeams(vector<string>& b) {
        int n=b.size();
        vector<int>bank;
        int ans=0;
        for(int i=0;i<n;i++){
            int temp=0;
            int no=b[i].size();

            for(int j=0;j<no;j++) if(b[i][j]=='1') temp++;
            if(temp) bank.push_back(temp);
        }
    
        n=bank.size();
            for(int i=0;i<n;i++){
            cout<<bank[i]<<" ";
        }
        for(int i=1;i<n;i++){
            int t = bank[i]*bank[i-1];
            ans+=t;
        }
        return ans;
    }
};