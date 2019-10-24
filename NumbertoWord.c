#include<stdio.h>
#include<string.h>
int main()
{
/*

Input: Enter the number
Output: In the word form	
Algorithm:
Seperate each and every digit of a number and print it in word form.

*/
char c[10];
int i=0;
printf("Enter a positive number");
scanf("%s", &c);
printf("Output:");
while(i<=strlen(c))
{
switch(c[i])
{
case '1':printf(" One");break;
case '2':printf(" Two");break;
case '3':printf(" Three");break;
case '4':printf(" Four");break;
case '5':printf(" Five");break;
case '6':printf(" Six");break;
case '7':printf(" Seven");break;
case '8':printf(" Eight");break;
case '9':printf(" Nine");break;
case '0':printf(" Zero");break;
}
i++;
}
return 0;
}

