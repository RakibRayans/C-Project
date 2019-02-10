#include<stdio.h>
int main()
{
    float grade = 0;
    float scoreEntered = 0;
    float numberOftests = 0;
    float average = 0;

    printf("Enter 0 when complete. \n\n");
    do
    {
        printf("Test: %.f    Average: %.2f    \n",numberOftests,average);
        printf("\nEnter your Score :   ");
        scanf("%f",&scoreEntered);
        grade+= scoreEntered;
        numberOftests++;
        average=grade/numberOftests;
    }
    while(numberOftests != 0);
        return 0;
}
