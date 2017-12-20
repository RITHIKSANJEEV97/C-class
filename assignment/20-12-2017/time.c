#include<stdio.h>
void main()
{
    int t,tf,m,mf,h,mi,hrs;
    printf("enter the time 1 with hour and minutes");
    scanf("%d %d",&t,&m);
    printf("enter the time 2 with hour and minutes");
    scanf("%d %d",&tf,&mf);
    h=tf-t;
    mi=mf-m;
    hrs=h*60+mi;
    printf("the diffrence is %d hour %d minutes \n",h,mi);
    printf("%d",hrs);
}
