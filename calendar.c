#include<stdio.h>

int main()
{
int d;
int i=1;
/*

Input: Enter the day of week where the month starts
Output: Print the calendar of the month out
Algorithm: Normal look algorithm.

*/
printf("Please enter the day number of week  when the month starts Sunday is 0 and then it follows the order that is Saturday is 6    ");
scanf("%d",&d);

printf("    August 2018\t\n");
printf(" S  M Tu  W Th  F Sa\n");

for(i=1;i<=31;i++)
{
if(d==7){d=0;printf("\n");}
if(i==1)
{
switch(d)
{
case 0:printf(" %d",i);break;
case 1:printf("    %d",i);break;
case 2:printf("       %d",i);break;
case 3:printf("          %d",i);break;
case 4:printf("             %d",i);break;
case 5:printf("                %d",i);break;
case 6:printf("                  %d",i);break;
}
d++;

}
else
{
if(d==0)
{
if(i<10)
{
printf(" %d",i);
}
else
{
printf("%d",i);
}
d++;
}
else
{
if(i<10)
{
printf("  %d",i);
}
else
{
printf(" %d",i);
}
d++;
}
}
}
return 0;
}
