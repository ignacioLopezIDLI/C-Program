#include <stdio.h>
#include <string.h>

int main(){

    char name[30]; // bytes
    int age;

    printf("\nWhat is you name?");
    //scanf("%s",&name);
    fgets(name,25,stdin);
    name[strlen(name)-1] = '\0';

    printf("How old are you?");
    scanf("%d",&age);
 
    printf("\nHello %s, How are you",name);
    printf("\nYou are %d years old",age);


    return 0;
}