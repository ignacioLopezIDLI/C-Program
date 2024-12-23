#include <stdio.h>
#include <ctype.h>

int main(){

    char unit;
    float temp;

    printf("\nIs the temperature in C or F?"); // Ask is temperature is in C o F
    scanf("%c", &unit);                        // Prompt
     unit = toupper(unit);                     // Upercase


    if(unit == 'C'){
        printf("\nEnter the  Temperature in Celcius: ");
        scanf("%f",&temp);
        temp = ((temp * 9 / 5)+32);
        printf("\nTemperature in Farenheit is %.1f",temp);
        
    }
    else if (unit == 'F'){
        printf("\nEnter the Temperature in  Farenheit ");
        scanf("%f",&temp);
        temp = ((temp - 32) * 5 / 9);
        printf("\nTemperature in Celcius is %.1f",temp);
    }
    else{
        printf("\n%c is not a valid unit",unit);
    }
    



    return 0;
}