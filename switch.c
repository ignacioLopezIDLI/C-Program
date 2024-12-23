#include <stdio.h>

int main(){
    
    char grade;
                         // Switch is more efficient to using many Else if
    printf("\nHi please enter your Grade : ");
    scanf("%c",&grade);

    switch(grade){
        case'A':
        printf("Perfect Grade\n");
        break;
        case'B':
        printf("Almost perfect Grade\n");
        break;
        case'C':
        printf("This is okay Grade\n");
        break;
        case'D':
        printf("At least is not F\n");
        break;
        case'F':
        printf("Fail\n");
        break;
        default:
        printf("Please Enter Valid grade\n");

    }
    return 0;
}
