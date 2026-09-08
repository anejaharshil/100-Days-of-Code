/* Q59: Count even and odd numbers in an array.


Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/
#include <stdio.h>
int main() {
    int n , i , evencount = 0 , oddcount = 0 ;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[100] ;
    printf("Enter the elements of the array: ");
    for ( i = 0 ; i < n ; i++){
        scanf("%d", &arr[i]);
    }

    for ( i = 0 ; i < n ; i++ ){
        if ( arr[i] % 2 == 0 ){
            evencount++ ;
        }
        else{
            oddcount++ ;
        }
    }

    printf("The number of even elements in the array is: %d\n", evencount);
    printf("The number of odd elements in the array is: %d\n", oddcount);

    return 0;
}

    