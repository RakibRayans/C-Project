#include <stdio.h>
int main()
{
    int n = 5;
    n = (n >> 2 ) + n;
    n = n & 3;
    printf("%d",n);
}
