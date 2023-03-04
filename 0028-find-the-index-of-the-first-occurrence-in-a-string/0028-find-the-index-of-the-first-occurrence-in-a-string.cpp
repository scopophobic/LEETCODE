class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) {
            return 0;
        }
        int n = needle.size();
        int m = haystack.size();
        int i = 0, j = 0;
        int ans = 0, f = 0;
        while (j < n && i < m) {
            if (needle[j] == haystack[i]) {
                if (j == 0) ans = i;
                if (j == n - 1) {
                    f = 1;
                    break;
                }
                j++;
                i++;
        } else {
            j = 0;
            i = ans+1;
            ans++;
        }
    }
        if (f) return ans;
        else return -1;
    }
};
