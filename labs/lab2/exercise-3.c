#include <stdio.h>

int main(){
    int sum = 0;
    int num;
    double average;
    printf("Please enter 10 numbers:\n");
    for (int i = 1; i <= 10; i++){
        printf("Number #%d>> ", i);
        scanf("%d", &num);
        sum += num;
    }

    average = sum / 10.0;
    printf("The sum of 10 numbers is %d\n", sum);
    printf("The average is %.2lf\n", average);
    return 0;
}

