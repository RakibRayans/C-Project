#include<stdio.h>
#include<math.h>
int main()
{
    float n;
    printf("Enter any value: ");
    scanf ("%f",&n);
    printf("Cos inverse (%.2f) = %.2f",n,acos(n)*180/M_PI);
    return 0;
}
