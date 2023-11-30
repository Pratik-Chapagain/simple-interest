#include<stdio.h>
#include<conio.h>
int main()
{
    float p,r,t,si;
    printf("enter the p");
    scanf("%f",&p);
    printf("enter the r");
    scanf("%f",&r);
    printf("enter the t");
    scanf("%f",&t);
    si=(p*t*r)/100;
    printf("simple interest=%f",si);

    return 0;
}