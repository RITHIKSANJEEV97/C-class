#include<stdio.h>
void main()
{
char a[100];
int i=0,V=5,X=10,I=1,b[100]; 
printf("enter the roman");
scanf("%s",a);
for(i=0;i<strlen(a);i++)
{
if(a[i]=='V')
{
b[i]=5;
}
if(a[i]=='X')
{
b[i]=10;
}
if(a[i]=='I')
{
b[i]=1;
}
printf("%d\n",b[i]);
}
i=0;
{
if(b[i]>=b[i+1])
{
printf("%d",b[i]+b[i+1]);
}
else
{
printf("%d",b[i+1]-b[i]);
}
}
}

