#include<stdio.h>
#include <math.h>
int main()
{
    int r;
    float area;
    printf ("Radius = ");
    scanf("%d", &r);
    area = M_PI*r*r;
    printf("Area = %f", area);
    return 0;

}
