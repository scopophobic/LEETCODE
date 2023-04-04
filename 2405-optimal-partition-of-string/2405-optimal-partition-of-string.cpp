class Solution {
public:
    int partitionString(string s) {
        int n = s.size(), i = 0, ans = 0;
        while (i < n) {
            unordered_set<char> seen;
            int j = i;
            while (j < n && !seen.count(s[j])) {
                seen.insert(s[j]);
                j++;
            }
            ans++;
            i = j;
        }
        return ans;
    }
};