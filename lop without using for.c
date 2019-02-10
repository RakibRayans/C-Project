#include<stdio.h>
int main()
{
    int count=10;
    for( ; ; )
    {
        printf("%d\n",count);
        count++;
        if(count==20)
            break;
    }
    return 0;
}
