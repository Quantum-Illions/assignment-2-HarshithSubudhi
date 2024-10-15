#include <stdio.h>

enum Day {Monday=1,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday};

int main(){
    int a;
    printf("Enter a number in 1-7 : ");
    scanf("%d", &a);
    switch(a){
        case Monday:
            printf("Monday");
            break;
        case Tuesday:
            printf("Tuesday");
            break;
        case Wednesday:
            printf("Wednesday");
            break;
        case Thursday:
            printf("Thursday");
            break;
        case Friday:
            printf("Friday");
            break;
        case Saturday:
            printf("Saturday");
            break;
        case Sunday:
            printf("Sunday");
            break;
        default:
            printf("Invalid number!!Enter a number in 1-7");
    }
    
    return 0;
}