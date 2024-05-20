class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        int subset_count = 1 << n; // There are 2^n subsets for a set of size n
        int total_sum = 0;
        
        // Iterate over all possible subsets
        for (int i = 0; i < subset_count; ++i) {
            int subset_xor = 0;
            for (int j = 0; j < n; ++j) {
                // Check if the j-th element is in the i-th subset
                if (i & (1 << j)) {
                    subset_xor ^= nums[j];
                }
            }
            total_sum += subset_xor;
        }
        
        return total_sum;
    }
};
