class Solution {
public:
    int binary_search(vector<int> &array, int target, int low, int high) {
        while (low <= high) {
            int mid = low + (high - low) / 2; 
            if (array[mid] == target) {
                return mid;
            } else if (array[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return -1;
    }
    
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        set<vector<int>> s;

        for (int i = 0; i < nums.size() - 2; i++) { 
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue; 
            }

            int j = i + 1, k = nums.size() - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0) {
                    s.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;

                    while (j < k && nums[j] == nums[j - 1]) j++; 
                    while (j < k && nums[k] == nums[k + 1]) k--; 
                } else if (sum < 0) {
                    j++;
                } else {
                    k--;
                }
            }
        }
        
        for (auto it : s) {
            ans.push_back(it);
        }
        return ans;
    }
};
