#include <stdio.h>

int main(){
    int a;
    float b;
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%f", &b);
    float new_a=(float)a;
    int new_b=(int)b;
    printf("New values are a=%.2f , b=%d", new_a, new_b);
    return 0;
}