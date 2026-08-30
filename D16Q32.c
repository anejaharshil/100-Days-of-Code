/* Q32: Write a program to check if a number is a palindrome.


Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>
int main(){
    int rev = 0 , rem , n , m ;
    printf("Enter a number: ");
    scanf("%d",&n);
    m = n ;

    while( n != 0 ){
        rem = n % 10 ;
        rev = (rev * 10) + rem ;
        n = n / 10 ;
    }

    if ( rev == m ){
        printf("Number is Palindrome");
    }
    else{
        printf("Number is Not Palindrome");
    }


    return 0;

}