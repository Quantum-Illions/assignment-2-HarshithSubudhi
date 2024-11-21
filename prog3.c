#include <stdio.h>

#define PI 3.14159

int main(){
    float r,A;
    printf("Enter radius:");
    scanf("%f", &r);
    A=PI*r*r;
    printf("Area of circle of radius %.2f is %.2f", r, A);
    
    return 0;
}