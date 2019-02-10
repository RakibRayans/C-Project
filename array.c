#include<stdio.h>
int main()
{
    int arr[100] = {1 , 2 , 3 , 4} ;
    int i,n,j;
    /*printf("enter number of elements\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    */
    for(i=0;i<4;i++)
    {
        printf("%d\n", 2* arr[i]);
    }
return 0;
}
