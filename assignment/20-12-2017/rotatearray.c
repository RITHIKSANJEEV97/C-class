#include<stdio.h>
void main()
{
    int a[100],n,i,temp,j=0,d;
    printf("enter array size");
    scanf("%d",&n);
    printf("enter no of times to be rotated");
    scanf("%d",&d);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    while(j<d)
    {
    temp=a[0];
    for(i=0;i<n-1;i++)
    {
    a[i]=a[i+1];
    }
    a[i]=temp;
    j++;
    }
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
