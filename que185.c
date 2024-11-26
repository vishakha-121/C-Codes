#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a,n,s;
    s=0;
    printf("enter number=");
    scanf("%d",&n);
    i=1;
    do
    {
        a=i*i;
        s=a+s;
        printf("\nsum=%d",s);
        i++;
    } while (i<=n);
    

}