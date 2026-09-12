/* Q67: Insert an element in an array at a given position.


Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>
int main() {
    int n , i , j , position , element ;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n+1] ;

    printf("Enter the elements of the array: ");
    for ( i = 0 ; i < n ; i++ ){
        scanf("%d", &arr[i]);
    }

    printf("Enter the position and element to insert: ");
    scanf("%d %d", &position , & element) ;

    for ( j = n ; j >= position ; j-- ){
        arr[j] = arr[j-1] ;
    }

    arr[position-1] = element ;

    printf("The array after insertion is: ");
    for ( i = 0 ; i <= n ; i++ ){
        printf("%d ", arr[i]) ;
    }

    return 0 ;
}