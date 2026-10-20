/* Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.


Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/
#include <stdio.h>
void mergeSortedArrays(int *nums1, int m, int *nums2, int n) {
    int merged[m + n];
    int i = 0, j = 0, k = 0;

    // Merge the two arrays
    while (i < m && j < n) {
        if (nums1[i] < nums2[j]) {
            merged[k++] = nums1[i++];
        } else {
            merged[k++] = nums2[j++];
        }
    }

    // Copy remaining elements of nums1, if any
    while (i < m) {
        merged[k++] = nums1[i++];
    }

    // Copy remaining elements of nums2, if any
    while (j < n) {
        merged[k++] = nums2[j++];
    }

    // Print the merged array
    for (int l = 0; l < m + n; l++) {
        printf("%d ", merged[l]);
    }
    printf("\n");
}
int main() {
    int nums1[] = {2, 7, 11, 15};
    int nums2[] = {4, 8, 10};
    mergeSortedArrays(nums1, sizeof(nums1) / sizeof(nums1[0]), nums2, sizeof(nums2) / sizeof(nums2[0]));

    int nums3[] = {1, 2, 7};
    int nums4[] = {9, 10, 17};
    mergeSortedArrays(nums3, sizeof(nums3) / sizeof(nums3[0]), nums4, sizeof(nums4) / sizeof(nums4[0]));

    int nums5[] = {-10, -2, 7};
    int nums6[] = {-3, -1, 7};
    mergeSortedArrays(nums5, sizeof(nums5) / sizeof(nums5[0]), nums6, sizeof(nums6) / sizeof(nums6[0]));

    return 0;
    
}