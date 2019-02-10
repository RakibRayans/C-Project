#include<stdio.h>
int main()
{
    int age,x;
    printf("Your age here : ");
    scanf("%d",&age);

    x = (age>=18) ? 1 : 0;
    printf("%d\n",x);
    return 0;
}

