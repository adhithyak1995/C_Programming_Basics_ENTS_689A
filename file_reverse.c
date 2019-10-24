
#include<stdio.h>
#include<string.h>
/*

Input: Take the contents of the file as input
Output: Parse each and every contents of the file and reverse each and every string of the file.
Algorithm:
Use fgetc function to read each character from the file and form a string till the occurence of space character. Then reverse the string
In case any punctuation found place it at the same position.

*/
int main(int argc,char *argv[])
{
int i=0,j=0,k=0;
char c,d[1000];
FILE *f,*o;

f=fopen(argv[1],"r");
o=fopen(argv[2],"w");

//while (c=fgetc(f) != EOF)
do
{	
	c=fgetc(f);	
	if(feof(f))
		break;
	//printf("\n%c\n",c);
	

	
	//for(i=0;i<=strlen(c);i++)
	//{
		if(((int)c>=32 && (int)c<=47) || ((int)c>=58 && 
(int)c<=64) || ((int)c>=91 && (int)c<=96))
		{
			for(k=strlen(d)-1;k>=0;k--)
			{
				fputc(d[k],o);
				printf("%c",d[k]);
			}
			j=0;
			d[j]='\0';
			fputc(c,o);
			printf("%c",c);
			
		}
		else
		{
			d[j]=c;
			j++;
			d[j]='\0';
		}
	



//	}
	//printf("");
	//fputc(32,o);

}while(1);

fclose(f);
fclose(o);
return 0;
}
