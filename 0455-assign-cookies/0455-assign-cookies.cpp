class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n=g.size(), m=s.size();
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int m0=max(m-n, 0), j=0, satisfied=0;
        for (int i=m0; i<m && j<n; i++){
            if (s[i]>=g[j]){
                satisfied++;
                j++;
            }
        } 
        return satisfied;
    }
};
