#include<stdio.h>
int main()
{
int a[10],b[10],c[20];
int i,j,k,t;
int m,n;
printf("Enter m and n");scanf("%d %d",&m,&n);
printf("Enter the array a");
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the array b");
for(j=0;j<n;j++)
{
scanf("%d",&b[j]);
}

for(i=0;i<n;i++)
{
for(j=n-1;j>=i+1;j--)
{
if(b[j]<b[j-1])
{
t=b[j];b[j]=b[j-1];b[j-1]=t;
}
}
}

i=0;j=0;t=m+n;

for(k=0;i<m && j<n;k++)
{
if(a[i]<=b[j])
{
c[k]=a[i];i++;
}
else
{
c[k]=b[j];j++;
}

}

for(;i<m;i++)
{
c[k]=a[i];k++;
}
for(;j<n;j++)
{
c[k]=b[j];k++;
}

for(k=0;k<t;k++)
{
printf("%d ",c[k]);
}

return 0;
}
