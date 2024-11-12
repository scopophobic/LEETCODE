class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {

        sort(items.begin(), items.end());

        map<long long, long long> mp;
        long long temp = 0;


        for (auto& item : items) {
            long long price = item[0];
            long long beauty = item[1];
            temp = max(temp, beauty);
            mp[price] = temp;
        }

        vector<int> ans;
        for (int query : queries) {

            auto it = mp.upper_bound(query);
            if (it == mp.begin()) {
                ans.push_back(0); 
            } else {
                --it;
                ans.push_back(it->second); 
            }
        }

        return ans;
    }
};
