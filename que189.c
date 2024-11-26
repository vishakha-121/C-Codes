#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,a,s;
    printf("enter your number=");
    scanf("%d",n);
    i=1;
    do
    {
        a=(i+1)*(i+1)*(i+1)-1;
        s=s+a;
        printf("\nsum=%d",s);
        i++;
    }while(i<=n);
}