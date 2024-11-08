class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int bit) {
        // return {2^3^4^7^9};
        int k = pow(2,bit) - 1;
        vector<int>arr(nums.size());
        int sum=0,j=nums.size()-1;
        for(int i=0;i<nums.size();i++){
            sum ^= nums[i];
            arr[j] = k - sum;
            j--;
        }
        int i=0;
        

        // reverse(arr.begin(),arr.end());
        return arr;
    }
};