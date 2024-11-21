#include <stdio.h>

int main(){
    int temp,sum=0;
    float avg;
    printf("Enter 5 numbers:");
    for(int i=0;i<5;i++){
        scanf("%d", &temp);
        sum+=temp;
    }
    avg=sum/5.0;
    printf("For the given numbers:\nsum=%d\naverage=%.2f\n", sum, avg);
    
    return 0;
}