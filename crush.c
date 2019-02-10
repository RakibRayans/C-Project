#include<stdio.h>
int main()
{
    char firstname[20];
    char crush[20];
    int numberofsee;

    printf("Enter your first name : ");
    scanf("%s", firstname);

    printf("Enter your crush nick name : ");
    scanf("%s", crush);

    printf("How many times you saw her ? ");
    scanf("%d",&numberofsee);

    if(numberofsee<3)
    printf("%s is crushed on %s ,it's one side Love.She don't Love You. Try new One \n",firstname,crush);
    else
        printf("%s is fall in Love with %s ,don't worry she also Love you but can't show. You can say her I LOVE YOU,\n",firstname,crush);

    return 0;
}
