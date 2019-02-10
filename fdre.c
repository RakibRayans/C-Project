#include<stdio.h>
int main()
{
    while (1)
    {
    int a,b,c;
    printf("Enter the value of a and b and c : ");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c)
        printf("The maximum number is a\n ");
    else if (b>a && b>c)
    printf("The maximum number is b\n");
    else
        printf("The maximum number is c\n");
    }
    return 0;
}
