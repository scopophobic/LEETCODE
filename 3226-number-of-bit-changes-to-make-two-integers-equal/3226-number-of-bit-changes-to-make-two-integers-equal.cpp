class Solution {
public:
    int minChanges(int n, int k) {
        int ans=0;
        vector<int>N;
        vector<int>M;
        while(n>0){
            int temp=n%2;
            N.push_back(temp);
            n=n/2;
        }
         while(k>0){
            int temp=k%2;
            M.push_back(temp);
            k=k/2;
        }
        
        // for(int i)
        // int si = min(N.size(),M.size());
        
        while (N.size() < M.size()) N.push_back(0);
        while (M.size() < N.size()) M.push_back(0);
        
        
        for(int i=0;i<N.size();i++)
        {
            cout<<N[i]<<" "<<M[i];
            if(N[i]==M[i]) continue;
            else if(N[i]==1 && M[i]==0) ans++;
            else return -1;
            
            
        }

        return ans;

    }
};