/* Q33: Write a program to check if a number is an Armstrong number.


Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include<stdio.h>
#include<math.h>
int main(){
int N ;
int c;
int original;
int rem;
int sum=0 ;
printf("Enter a number N: ");
scanf("%d",&N);
original = N;
while(N!=0){
	c++;
	N=N/10;
}
N = original;
while(N!=0){
	rem=N%10;
	sum=sum+pow(rem,c);
	N=N/10;
}
if(sum == original){
	printf("Number is ArmStrong");
}
else {
	printf("Number is not Armstrong");
}

return 0;
}