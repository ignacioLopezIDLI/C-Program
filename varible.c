#include <stdio.h>

int main(){
                            // Variable space of memory to store a value x
    int x;                   //Declaration
    x = 123;                 //Initialization
    int y = 321;             // Declaration + Initialization
    int age = 21;            //integer
    float gpa = 2.05;        // Floating point number 
     char grade = 'c';        // Single Character
    char name[] = "Ignacio"; // Array of characters

    printf("My name is %s \n", name); 
    printf("i have  %d are old\n", age);
    printf("Your average is %c \n", grade);
    printf("Your gpa is %f \n", gpa);


    return 0;

}