class Solution {
public:
    // bool ans;
    bool isPowerOfTwo(int n) {
        // if(n==2) return true;
        // cout<<n<<endl;
        if(n==1) return true;
        if(n==0 or n%2!=0) return false;
        
        // if(n==2) return true;
        
        
        
        return isPowerOfTwo(n/2);
        
    }
};