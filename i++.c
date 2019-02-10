#include<stdio.h>
int main()
{
    int x;
    printf("Enter any number: ");
    scanf("%d",&x);

     printf("%d\n",10 + ++x);
    printf("%d\n",10 + x++);
    printf("%d\n",10 + x--);
     printf("%d\n",10 + --x);
     printf("%d\n",10 + --x);


    return 0;
}
