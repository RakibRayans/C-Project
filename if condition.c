#include<stdio.h>
int main()
{
    int age;
    printf("Your age here : ");
    scanf("%d",&age);

    age>=18 ? printf("You are adult.\n"): printf("You are minor.\n");
    return 0;
}
