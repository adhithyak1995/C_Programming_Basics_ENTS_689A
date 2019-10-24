#include<stdio.h>
/*
Finding Reverse of a number

Input: Get a number.
Output: Prints the digits of the number seperated by space.
Algorithm: 
Use While loop to pass the remainder as the parameter to condition. Seperate each and every digit at the end and print them out.

*/
int main()
{
int n;
int r;
printf("Input : ");scanf("%d",&n);
printf("Output :");
while(n>0)
{
r=n%10;
printf(" %d",r);
n=n/10;
}

return 0;
}
