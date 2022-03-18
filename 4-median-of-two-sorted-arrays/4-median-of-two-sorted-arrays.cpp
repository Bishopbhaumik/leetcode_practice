class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size(), target = (m + n) / 2;
        int i = 0, j = 0;
        double median = 0;
        bool odd = ((m + n) % 2 == 1);
        while (i < m && j < n) {
            if (i + j == target - 1) {
                if (!odd) {
                    median = nums1[i] < nums2[j] ? nums1[i++]: nums2[j++];
                } else {
                    if (nums1[i] < nums2[j]) {
                        i++;
                    } else {
                        j++;
                    }
                }
            } else if (i + j == target) {
                median += nums1[i] < nums2[j] ? nums1[i++]: nums2[j++];
                if (!odd) {
                    median /= 2;
                }
                break;
            } else {
                if (nums1[i] < nums2[j]) {
                    i++;
                } else {
                    j++;
                }
            }            
        }
        while (i < m) {
            if (i + j == target - 1) {
                if (!odd) {
                    median = nums1[i];
                }
            } else if (i + j == target) {
                median += nums1[i];
                if (!odd) {
                    median /= 2;
                }
                break;
            }
            i++;
        }
        while (j < n) {
            if (i + j == target - 1) {
                if (!odd) {
                    median = nums2[j];
                }
            } else if (i + j == target) {
                median += nums2[j];
                if (!odd) {
                    median /= 2;
                }
                break;
            }
            j++;
        }
        return median;
        
        
        
    }
};