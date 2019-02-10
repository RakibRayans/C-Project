#include<stdio.h>
//#include<math.h>
int main()
{
    while(1)
    {
    int F,m,a;
    printf("Enter mass and than acceleration : \n");
    scanf("%d %d",&m,&a);

    F = m*a;
    printf("Force = %d\n",F);
    }
    return 0;
}
