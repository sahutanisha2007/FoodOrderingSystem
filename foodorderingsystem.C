#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int totalbill(void);
int main(){
    int total;
    system("cls");
    total=totalbill();
    printf("Your total bill amount is:%d",total);
    printf("\nThank you for your order!");
}
int totalbill(){
char c;
int billamount=0;
char item;
int vegitem, nonvegitem;
char selectagain;
 printf("..................welcome to online food order..........");
printf("\n.................please follow below instruction..........");
printf("\nstep 1:please press s to start your order");
printf("\nstep 2: you can order both veg and nonveg item");
printf("\n step 3:please press a to select veg item");
printf("\n step 4: please press b to select nonveg item\n ");
printf("\nstep 5:you will get your final bill after your order ");
start:
printf("\n please press according to instruction:" );
scanf(" %c",&c);
if(c=='s'||c=='S'){
    items:
    printf("\nplease select your choice");
    printf("\n (a)veg items     (b)non veg item");
    printf("\n Enter your types of item:");
    scanf(" %c",&item);
    if(item=='a'||item=='A'){
    vegitemlist:
    printf("\nplease select 1,2,3,4,5 as per your choice");
    printf("\n(1)panner:price:Rs.250");
    printf("\n(2)burger:price:Rs.50");
    printf("\n(3)pizza:price:Rs.150");
    printf("\n(4)veg roll:price:Rs.100");
    printf("\n(5)chowmin:price:Rs.80");
    printf("\n enter your veg items according to instruction:");
    scanf(" %d",&vegitem);
        if(vegitem==1){
        billamount=billamount+250;
    }
     else if(vegitem==2){
        billamount=billamount+50;
    }
    else if(vegitem==3){
        billamount=billamount+150;
    }
    else if(vegitem==4){
        billamount=billamount+100;
    }
    else if(vegitem==5){
        billamount=billamount+80;
    }
else{
    printf("\n you have enter a wrong value,please try again!");

goto vegitemlist;}
printf("\ndo you want to add more items(y or n)?");
printf("\nselect again:");
scanf(" %c",&selectagain);
if(selectagain=='y'||selectagain=='Y')
{
    goto items;
}
else{
    return billamount;
}
}
else if(item=='b'|| item=='B'){
    nonvegitemlist:
    printf("\nplease select 1, 2,3,4,5 as per your choice");
    printf("\n(1)chicken:price:Rs.350");
    printf("\n(2)boil egg:price:Rs.50");
    printf("\n(3)malet:price:Rs.100");
    printf("\n(4)egg roll:price:Rs.150");
    printf("\n(5)biryani:price:Rs.200");
    printf("\n enter your  non veg items according to instruction:");
    scanf("  %d",&nonvegitem);
    if(nonvegitem==1){
        billamount=billamount+350;
    }
     else if(nonvegitem==2){
        billamount=billamount+50;
    }
    else if(nonvegitem==3){
        billamount=billamount+100;
    }
    else if(nonvegitem==4){
        billamount=billamount+150;
    }
    else if(nonvegitem==5){
        billamount=billamount+200;
    }
else{
    printf("\n you have enter a wrong value,please try again!");

goto nonvegitemlist;
}
printf("\ndo you want to add more items(y or n)?");
printf("\nselect again:");
scanf("  %c",&selectagain);
if(selectagain=='y'||selectagain=='Y')
{
    goto items;
}
else{
    return billamount;
}
}

    
else{
    printf("\n you have enter a wrong value,please try again!");
goto items;}

}

else{
    printf("\n you have enter a wrong value,please press s");

goto start;}
return billamount;
}










