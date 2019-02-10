#include<stdio.h>
int main()
{
    int A,B,C;
    printf("Enter v. of A B C:");
    scanf("%d%d%d",&A,&B,&C);

    A=A+C;
    C=A-C;
    A=A-C;
    C=C+B;
    B=C-B;
    C=C-B;
    printf("swapping result \nA=%d\nB=%d\nC=%d\n",A,B,C);
    return 0;
}
