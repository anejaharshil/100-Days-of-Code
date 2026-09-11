/* Q65: Search in a sorted array using binary search.


Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include <stdio.h>
int main() {
    int n , i , search , low , high , mid , found = 0 ;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n] ;

    printf("Enter the elements of the sorted array: ");
    for ( i = 0 ; i < n ; i++ ){
        scanf("%d", &arr[i]) ;
    }

    printf("Enter the element to search: ");
    scanf("%d", &search) ;

    low = 0 ;
    high = n - 1 ;

    while ( low <= high ){
        mid = ( low + high ) / 2 ;

        if ( arr[mid] == search ){
            found = 1 ;
            printf("Found at index %d\n", mid);
            break ;
        }
        else if ( arr[mid] < search ){
            low = mid + 1 ;
        }
        else {
            high = mid - 1 ;
        }
    }
    
    if ( found == 0 ){
            printf("-1\n") ;
    }
    return 0 ;
}