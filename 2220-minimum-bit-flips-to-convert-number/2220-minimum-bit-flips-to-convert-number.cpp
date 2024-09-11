class Solution {
public:
    int minBitFlips(int start, int goal) {
        
        int ans = 0;
        while(start or goal){
            int a = start%2;
            int b = goal%2;
            
            if(a!=b) ans++;
            
            start/=2;
            goal/=2;
        }
        
        return ans;
    }
};