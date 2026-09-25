#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(0));
    int player,computer;
    system("cls");
    computer=rand()%3;
printf("choose 0 for snake,1 for water,2 for gun\n");
scanf("%d",&player);
printf("%d",computer);
return(0);

    //0-snake,1-water,2-gun
}