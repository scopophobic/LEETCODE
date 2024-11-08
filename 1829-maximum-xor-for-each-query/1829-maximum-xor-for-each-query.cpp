class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int bit) {
        // return {2^3^4^7^9};
        int k = pow(2,bit) - 1;
        vector<int>arr(nums.size());
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum ^= nums[i];
            arr[i] = sum;
        }
        int i=0;
        for(auto it : arr){
            cout<<it<<" ";
            nums[i] = k - it ;
            i++;
        } 
        
        cout<<endl;
        reverse(nums.begin(),nums.end());
        return nums;
    }
};