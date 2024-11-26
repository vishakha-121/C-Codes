#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,a,b;
    b=0;
    printf("enter your number=");
    scanf("%d",&n);
    i=1;
    do
    {
        a=i*i*+1;
        b=b+a;
        printf("\nsum=%d",b);
        i++;
    } while (i<=n);
    

}