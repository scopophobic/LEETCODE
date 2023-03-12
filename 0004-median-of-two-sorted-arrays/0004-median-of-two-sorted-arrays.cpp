class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        if (n == 0 && m == 0) {
            return 0.0;
        }
        if (n > m) {
            swap(nums1, nums2);
            swap(n, m);
        }
        int i=0,j=0;
        int left = 0, right = n;
        while (left <= right) {
            i = (left + right) / 2;
            j = (n + m + 1) / 2 - i;
            if (i < n && nums2[j-1] > nums1[i]) {
                left = i + 1;
            }
            else if (i > 0 && nums1[i-1] > nums2[j]) {
                right = i - 1;
            }
            else {
                int max_left = 0;
                if (i == 0) max_left = nums2[j-1];
                else if (j == 0) max_left = nums1[i-1];
                else max_left = max(nums1[i-1], nums2[j-1]);
                if ((n + m) % 2 == 1) {
                    return max_left;
                }
                int min_right = 0;
                if (i == n) min_right = nums2[j];
                else if (j == m) min_right = nums1[i];
                else min_right = min(nums1[i], nums2[j]);
                return (max_left + min_right) / 2.0;
            }
        }
        return 0.0;
    }
};
