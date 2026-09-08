/* Q60: Count positive, negative, and zero elements in an array.


Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include <Stdio.h>
int main() {
    int n , i , positive = 0 , negative = 0 , zero = 0 ;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[100] ;

    printf("Enter the elements of the array: ");
    for ( i = 0 ; i < n ; i++ ){
        scanf("%d", &arr[i]);
    }

    for ( i = 0 ; i < n ; i++ ){
        if ( arr[i] > 0 ){
            positive++ ;
        }
        else if ( arr[i] < 0 ){
            negative++ ;
        }
        else{
            zero++ ;
        }
    }

    printf("The number of positive elements in the array is: %d\n", positive);
    printf("The number of negative elements in the array is: %d\n", negative);
    printf("The number of zero elements in the array is: %d\n", zero);

    return 0;
}