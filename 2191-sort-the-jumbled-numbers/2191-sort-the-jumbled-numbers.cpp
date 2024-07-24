class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<pair<int, int>> mappedNums;

        // Transform each number to its jumbled version and store it with the original index
        for (int i = 0; i < nums.size(); i++) {
            int temp = nums[i];
            string jumbledStr = "";
            if (temp == 0) {
                jumbledStr = to_string(mapping[0]);
            } else {
                while (temp > 0) {
                    int r = temp % 10;
                    jumbledStr = to_string(mapping[r]) + jumbledStr;
                    temp /= 10;
                }
            }
            int jumbledNum = stoi(jumbledStr);
            mappedNums.push_back({jumbledNum, i});
        }

        // Sort based on the jumbled numbers
        sort(mappedNums.begin(), mappedNums.end());

        // Build the result based on the sorted indices
        vector<int> result;
        for (auto& pair : mappedNums) {
            result.push_back(nums[pair.second]);
        }

        return result;
    }
};
