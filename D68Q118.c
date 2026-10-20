/* Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number


Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

*/
#include <stdio.h>
int findMissingNumber(int *nums, int numsSize) {
    int expectedSum = numsSize * (numsSize + 1) / 2; // Sum of first n natural numbers
    int actualSum = 0;

    for (int i = 0; i < numsSize; i++) {
        actualSum += nums[i];
    }

    return expectedSum - actualSum; // The missing number
}
int main() {
    int nums1[] = {0, 3, 2, 4};
    printf("%d\n", findMissingNumber(nums1, sizeof(nums1) / sizeof(nums1[0])));

    int nums2[] = {1, 2, 3};
    printf("%d\n", findMissingNumber(nums2, sizeof(nums2) / sizeof(nums2[0])));

    int nums3[] = {0, 4, 3, 1, 5};
    printf("%d\n", findMissingNumber(nums3, sizeof(nums3) / sizeof(nums3[0])));

    return 0;
    
}