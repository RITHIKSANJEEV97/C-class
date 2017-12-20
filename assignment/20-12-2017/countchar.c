#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    int b,count,j,i;
    scanf("%s",a);
    b=strlen(a);

    for(i=0;i<b;i++)
    {
        count=1;
        if(a[i]=='@')
        continue;
        for(j=i+1;j<b;j++)
        {
        if(a[i]==a[j])
        {
            a[j]='@';
            count++;

        }}
 printf("%c - %d \n",a[i],count);
    }

}
