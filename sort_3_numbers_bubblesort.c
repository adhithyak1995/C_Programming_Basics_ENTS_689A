#include<stdio.h>
/*

Input: Get three numbers from the user a,b and c.
Output: Sort them and print in an array.
Algorithm: Perform bubble sort to perform the sorting
What bubble sort do?
In each outer iteration, smallest number of the lot is bubbled-up and printed out.

*/
int main()
{
int a,b,c,sort[3];
int i,j,temp;

printf("Input: ");
scanf("%d %d %d",&a,&b,&c);
sort[0]=a;
sort[1]=b;
sort[2]=c;

for(i=0;i<3;i++)
{
for(j=2;j>=i+1;j--)
{
if(sort[j]<sort[j-1])
{
temp=sort[j];
sort[j]=sort[j-1];
sort[j-1]=temp;
}
}
}
printf("Output: ");
for(i=0;i<3;i++)
{
printf("%d ",sort[i]);
}

return 0;
}

