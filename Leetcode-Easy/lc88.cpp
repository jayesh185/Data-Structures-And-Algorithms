class Solution {
public:
//this is leetcode 88. merge sorted arrays 
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int total = m + n;
        if (m == 0) {
            for (int i = 0; i < n; i++) {
                nums1[i] = nums2[i];
            }
            return;
        }
        int i = m - 1, j = n - 1;
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[total - 1] = nums1[i--];
            } else {
                nums1[total - 1] = nums2[j--];
            }
            total--;
        }
        while (j >= 0) {
            nums1[total - 1] = nums2[j--];
            total--;
        }
    }
};
