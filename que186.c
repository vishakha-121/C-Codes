#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a,n,b,s;
    s=0;
    printf("enter number=");
    scanf("%d",&n);
    i=1;
    {
        a=b;
        s=s+a;
        b=b+3;
        printf("\n sum=%d",s);
        i++;
    }while(i<=n);
    

    

}