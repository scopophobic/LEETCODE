class Solution {
public:
    int rob(vector<int>& nums) {
        int a=0,b=0;
        for(auto it : nums){
            int temp = max(it + a, b);
            a=b;
            b=temp;
        }
        return b;
    }
};