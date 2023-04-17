class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        int max=*max_element(candies.begin(), candies.end());
        vector<bool>ans;
        for(int i = 0 ;i<n;i++){
            if(candies[i]+extraCandies < max)
                ans.push_back(false);
            else ans.push_back(true);
        }
        return ans;
    }
};