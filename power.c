#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    printf ("Enter two digit :\n");
    scanf("%d%d", &x,&y);
    float p= pow(x,y);
    printf("%d to the power %d = %.1f",x,y,p);
    return 0;
}
