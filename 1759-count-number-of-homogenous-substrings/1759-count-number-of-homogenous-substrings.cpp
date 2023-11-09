class Solution {
public:
    const unsigned int M = 1000000007;
    unsigned long long int fact(unsigned int n) { 
        if (n == 1 ) 
            return 1; 
        return n + fact(n - 1); 
    } 
    int countHomogenous(string s) {
        char x=s[0];
        unsigned long long int ans=0,c=1;
        
        
        for(int i=1;i<s.size();i++){
            if(s[i]!=x){
                ans+=fact(c);
                cout<<c<<" "<<ans<<endl;
                c=0;
            }
            c++;
            x=s[i];
        }
        ans+=fact(c);
        
        return ans%M;
        
    }
};