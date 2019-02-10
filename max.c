#include<stdio.h>
int main()
{
    int A,B;
    while (1)
    {
        printf("Enter the value of A: ");
        scanf("%d",&A);
        printf("Enter the value of B: ");
        scanf("%d",&B);
        if(A>B)
            printf("The maximum number is A.\\n");
        else
        printf("The maximum number is B.\\n");
    }
    return 0;
}
