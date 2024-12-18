#include <stdio.h>

int main(){

        // Format specifier % = defines and  Formats a type of data to be displayed

        // %c character   
        // %s  string  (Array of Character)  
        // %f float
        // %lf Double
        // %d  integer

        
        // %.1 = Decimal precision
        // %1 = minimun field Width
        // %- = left align

        float item1 = 2.525;
        float item2 = 20.765;
        float item3 = 500.829;

        int x = 5;
        int y = 2;
        float z = x / (float)y;

        printf("%.1f\n",z);

        printf("item1 = %.2f\n",item1);
        printf("item2 = %.2f\n",item2);
        printf("item3 = %.2f\n",item3);
  

    return 0;
}