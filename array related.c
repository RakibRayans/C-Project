#include<stdio.h>
int main()
{
    int i,j,a[10][10];
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            a[i][j] = i * j;
        }
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            printf("%d %d = %d\n",i,j,a[i][j]);
        }
        printf(" \n");
    }
    return 0;
}
