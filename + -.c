#include<stdio.h>
int main()
{
    int n,x,y;
    char c;
    printf("Enter the value: ");
    scanf("%d",&n);
    //printf("Enter + or - : ");
    scanf(" %c",&c);
    if(c == '+')
    {
        y=n+10;
        printf("%d",y);
    }
    else if(c=='-')
    {
        x=n-10;
        printf("%d",x);
    }
    else
    {
            printf("Nothing to show.");

    }
    return 0;
}
