/* Q46: Write a program to print the following pattern:
*****
*****
*****
*****
*****


Sample Test Cases:
Input 1:

Output 1:
*****
*****
*****
*****
*****

*/
#include <Stdio.h>
int main(){
    int n , i , j ;

    printf("Enter the number of lines: ");
    scanf("%d", &n);

    for ( i = 1 ; i <= n ; i++ ){

        for ( j = 1 ; j <= n ; j++ ){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}