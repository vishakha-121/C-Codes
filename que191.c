/**/

#include<stdio.h>
#include<conio.h>
void area(float);
int main()
{
    int a;
    printf("\n enter a number=");
    scanf("%f",a);
    area(a);



}
void area(float r)
{
    float x;
    x=3.14*r*r;
    printf("\n area of circle=%f",x);
}