#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i,n,s;
    s=0;
    printf("\n enter number=");
    scanf("%d",&n);
    i=1;
    do
    {
      a=i;
      s=s+a;
      printf("\n sum=%d",s); 
      i++;
    } while (i<=n);
    
}






