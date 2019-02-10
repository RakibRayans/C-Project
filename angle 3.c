#include <stdio.h>
#include <math.h>
int main()
{
    float t;
    printf("Enter any angle: ");
    scanf ("%f", &t);
    printf("sin inversr (%0.2f) = %0.2f",t,asin(t)*180/M_PI);
    return 0;
}
