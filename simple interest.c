#include<stdio.h>
int main()
{
    int p,r,t,si;
    printf("Enter v. principle,rate of int,time:");
    scanf("%d%d%d",&p,&r,&t);

    si=(p*r*t)/100;
    printf("Simple interest is : %d",si);
    return 0;
}
