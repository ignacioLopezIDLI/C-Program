#include <stdio.h>
#include <stdbool.h>

int main(){

    char a = 'c';                               // single character   %c
    char b[] = "Ignacio";                       // Arrays of Character %s

    float c = 3.1231243243;                     // 4 bytes 6-7 digits  %f
    float d = 3.123434343434;                   // 8 bytes 15-16 digits  %lf

    bool e = false;                             // 1 bytes (true or false) /d

    char f = 120;                               // 1 bytes (-128 to +127) %d or %c
    unsigned char g = 252;                      // 1 bytes (0 to +255) %d or %c

    short h = 327267;                           // 2 bytes (-32.768 to +32.767) %d         
    unsigned short  i = 65535;                  // 2bytes (0 to +65.535) /%d
    int j = 2147483647;                         // 4 bytes ( -2.147.483.648 to +2.147.483.647) /d
    unsigned int k = 4294967295;                // 4 bytes ( 0 to +4.294.967.295) %u

    long long int l = 943786549785;             // 8 bytes (-9 Quintillion  to +9 Quintillion) %lld
    unsigned long long int m = 54487547548784545; //  8 bytes ( 0 to +18 Quintillion )         %llu



    printf("Es %d",e);
    printf("Es %d",f);
    printf("Es %d",g);
    printf("Es %d",h);

        return 0;


}
