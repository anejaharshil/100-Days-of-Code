/* Q42: Write a program to check if a number is a perfect number.


Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
#include <stdio.h>

int main() {
    int N, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &N);

    for (i = 1; i < N; i++) {
        if (N % i == 0) {
            sum = sum + i;
        }
    }

    if (sum == N) {
        printf("Perfect number");
    } else {
        printf("Not perfect number");
    }

    return 0;
}