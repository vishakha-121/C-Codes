#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,a,b,s;
    s=0;
    b=3;
    printf("\n enter your number=");
    sacnf("%d",&n);
    i=1;
    do
    {
        a=b;
        s=a+s;
        b=b*2;
        printf("\n sum=%d",s);
        i++;
    } while(i<=n);
    
}