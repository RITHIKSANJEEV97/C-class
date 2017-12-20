#include<stdio.h>
#include<string.h>
void main()
{
int b,i,j;
char a[200],temp;
scanf("%s",a);
printf("the string is %s \n",a);
b=strlen(a);
for(i=0;i<b-1;i++)
{
if(i%2==0)
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
}
printf("the ans is %s",a);
}
