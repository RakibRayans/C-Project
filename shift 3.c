#include<stdio.h>
int main()
{
    while (1)
    {
    int n;
    scanf("%d",&n);
     n= (n>>3);
  n = n & 5;
      printf("n = %d\n",n);
  n= (n>>2)+n;
    printf("n = %d\n",n&3);
    }
    return 0;
}


