/* Q40: Write a program to find the 1’s complement of a binary number and print it.


Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>

int main() {
    long long N;
    int digit;

    printf("Enter a binary number: ");
    scanf("%lld", &N);

    if (N == 0) {
        printf("1");
    } else {
        while (N != 0) {
            digit = N % 10;

            if (digit == 0) {
                printf("1");
            } else {
                printf("0");
            }

            N = N / 10;
        }
    }

    return 0;
}