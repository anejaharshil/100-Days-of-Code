/* Q38: Write a program to find the sum of digits of a number.


Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>
int main(){
int N;
int sum=0;
int rem;
printf("Enter an integer");
scanf("%d",&N);
while(N!=0){
rem=N%10;
sum=sum+rem;
N=N/10;
}
printf("Sum of the digits = %d\n",sum);
return 0;
}
