class Solution {
public:
    int hammingWeight(uint32_t n) {
        int n0=890;
        string str = to_string(n0);
        // cout<<str;
        int c=0;
        char bin32[]  = "00000000000000000000000000000000";
        for (int pos = 31; pos >= 0; --pos){
            if (n % 2) {
                bin32[pos] = '1';
                c++;
            }
            n /= 2;
        }
        return c;
    }
};