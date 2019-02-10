#include<stdio.h>
int main()
{
    int testnumber=0;
    float scoreaverage=0;
    float scoreentered=0;
    float grade=0;

    printf("press 0,for close.\n\n");

    do
    {
        printf("No of Test=%d   scoreaverage=%.2f\n",testnumber,scoreaverage);
        printf("\nEnter test score: ");
        scanf("%f",&scoreentered);
        grade+=scoreentered;
        testnumber++;
        scoreaverage=grade/testnumber;

    }while(scoreentered!=0);
    return 0;
}
