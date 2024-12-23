#include<stdio.h>

int main(){

int age;

printf("\nHow old are you?");
scanf("%d",&age);

if (age >= 18){
    printf("Enjoy enter to the club!");
}else if(age < 0){
    printf("you havent born yet!");

}else if(age < 18 ){
    printf("you are kid");
}

    return 0;
}