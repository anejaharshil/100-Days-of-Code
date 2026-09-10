/* Q64 (Arrays 1D): Find the digit that occurs the most times in an integer number.


Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>
int main() {
    int num  , digit , i , maxcount = 0 , maxdigit = 0 ;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    int count[10] = {0} ;

    while ( num > 0 ){
        digit = num % 10 ;
        count[digit]++ ;
        num = num / 10 ;
    }

    for ( i = 0 ; i < 10 ; i++ ){
        if ( count[i] > maxcount ){
            maxcount = count[i] ;
            maxdigit = i ;
        }

        

        }

    printf("The digit that occurs the most times is: %d\n", maxdigit) ;

    return 0;
}