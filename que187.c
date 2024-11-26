#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,a,b,s;
    s=0;
    b=1;
    printf("enter your number=");
    scanf("%d",&n);
    i=1;
    do
    {
        a=b;
        s=s+a;
        b=b+4;
        printf("\nsum=%d",s);
        i++;
    } while (i<=n);
    
}