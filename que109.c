
/* WAP to follow Series....
                        8,14,20,26,32.....n terms . */

#include <stdio.h>
#include <conio.h>

int main()
{
    int i,n,s,p;
    p=8;
    printf("\n Enter a number = ");
    scanf("%d",&n);
    printf(" serise : ");
    for ( i = 1; i <=n; i++)
    {
        s=p;
        printf("%d,",s);
        p=p+6;
    }
}