#include<stdio.h>
int  main()
{
    int a,b,c,d,e;
    float f,g,h;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    g=a; h=b;
    c = a+b;
    d = a-b;
    e = a*b;
    f = g/h;
    printf("C=%d\n D=%d\n E=%d\n F=%.2f\n",c,d,e,f);
    return 0;
}
