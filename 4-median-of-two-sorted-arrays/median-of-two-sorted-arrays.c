#include <stdio.h>
#include <math.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    // Ensure nums1 is the smaller array to optimize binary search range
    if (nums1Size > nums2Size) {
        return findMedianSortedArrays(nums2, nums2Size, nums1, nums1Size);
    }

    int m = nums1Size;
    int n = nums2Size;
    int low = 0, high = m;

    while (low <= high) {
        int partitionX = (low + high) / 2;
        int partitionY = (m + n + 1) / 2 - partitionX;

        // If partitionX is 0, there is nothing on the left side. Use -infinity
        // If partitionX is m, there is nothing on the right side. Use +infinity
        int maxLeftX = (partitionX == 0) ? -1e7 : nums1[partitionX - 1];
        int minRightX = (partitionX == m) ? 1e7 : nums1[partitionX];

        int maxLeftY = (partitionY == 0) ? -1e7 : nums2[partitionY - 1];
        int minRightY = (partitionY == n) ? 1e7 : nums2[partitionY];

        if (maxLeftX <= minRightY && maxLeftY <= minRightX) {
            // We have partitioned the arrays correctly
            if ((m + n) % 2 == 0) {
                return (double)(MAX(maxLeftX, maxLeftY) + MIN(minRightX, minRightY)) / 2.0;
            } else {
                return (double)MAX(maxLeftX, maxLeftY);
            }
        } else if (maxLeftX > minRightY) {
            // We are too far to the right in nums1, move left
            high = partitionX - 1;
        } else {
            // We are too far to the left in nums1, move right
            low = partitionX + 1;
        }
    }

    return 0.0;
}