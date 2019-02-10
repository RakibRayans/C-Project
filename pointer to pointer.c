#include<stdio.h>
int main()
{
    int x=10;
    int *j;
    int **k;

    j=x;
    k=j;
    printf("%d value from x\n",x);
    printf("%d pointer value from j\n",j);
    printf("%d address value from k\n",k);
    return 0;
}

