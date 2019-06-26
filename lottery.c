#include<stdio.h>
#include<stdlib.h>
int main(){

int age    =0;
int smoney =0;
int id     =0;
int money  =0;
int number =0;
int num    =0;


printf("Welcome to our lottery game\n");
printf("Please enter your age");
scanf("%d",&age);

if(age>17){


    printf("Please Show your money");
    scanf("%d",&smoney);
    printf("This is your money:%d\n",smoney);
while(age>17){

    printf("Please enter your id");
    scanf("%d",&id);
while(id==111){

    printf("Please enter your money:\n must be more than 1000ks");
    scanf("%d",&money);
while(money>999){

    printf("Please enter your number");
    scanf("%d",&number);
if(number==123){
        smoney=money*10;
    printf("Your win in Lottery Game\n");
    printf("This is your smoney:%d\n",smoney);
    printf("If you want to again press 1\n");
    printf("If you want to quit press 2\n");
    scanf("%d",&num);
if(num==1){

    printf("You can play again");
}else{

    printf("Good Buy");
    exit(0);

}
}else{

    printf("Try Again\n");
    smoney=smoney-money;
    printf("This is your remain money:%d\n",smoney);
if(smoney<1000){
    printf("Try More!\n You have enough money:%d",smoney);
    exit(0);
}
}
}
}
}
}else{

       printf("You Cann't play game");
}

return 0;
}
