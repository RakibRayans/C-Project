#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter v. of a @ b:");
    scanf("%d%d",&a,&b);

    a=a+b;
    b=a-b;
    a=a-b;
    printf("The swapping value is \na=%d \nb=%d\n",a,b);
    return 0;
}
