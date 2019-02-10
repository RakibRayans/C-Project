#include<stdio.h>
int main()
{
    int x=10;
    int *j=x;
    int k=x;
    printf("%d value from x\n",x);
    printf("%d pointer value from j\n",j);
    printf("%d address value from k\n",&x);
    return 0;
}
