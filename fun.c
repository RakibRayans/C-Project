#include<stdio.h>
int main()
{
    char ans ;

    printf("biye-sadi kore felchis ? (y/n) \n");
    scanf("%c", &ans);

    if (ans == 'y' ){
        printf("eto agei biye korar iche jagche ken, control korte parlina ?\n Barite ki Team bananor iche ache naki !!\n Ji hok biye jokhn korei felchis HAPPY THAKIS \n");}
    else if (ans == 'n'){
        printf("ekhno biye korlina !!  kono problem ache ?\n thakle bolte parish tor jonno valo doctor khoje dibone :) ");}
    else{
        printf("pagol hoiya geli naki!!, ki question korlam r tui ki answer korchis!, pabna jaite iche kortese? niya jaite hobe? :) ");}

    return 0;
}
