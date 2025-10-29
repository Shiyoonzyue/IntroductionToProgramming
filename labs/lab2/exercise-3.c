// #include <stdio.h>

// int main(){
//     int sum = 0;
//     int num;
//     double average;
//     printf("Please enter 10 numbers:\n");
//     for (int i = 1; i <= 10; i++){
//         printf("Number #%d>> ", i);
//         scanf("%d", &num);when
//         sum += num;
//     }

//     average = sum / 10.0;
//     printf("The sum of 10 numbers is %d\n", sum);
//     printf("The average is %.2lf\n", average);
//     return 0;
// }


// #include <stdio.h>

// int main(){
//     int sum = 0;
//     int num;
//     double average;
//     int count = 0;

//     printf("Please enter 10 numbers\n");
//     while (count < 10){
//         printf("Number #%d>> ", count + 1);
//         scanf("%d", &num);
//         sum += num;
//         count++;
//     }

//     average = sum / 10.0;
//     printf("The sum of 10 numbers is %d\n", sum);
//     printf("The average is %.2lf\n", average);
//     return 0;
// }

#include <stdio.h>

int main() {
    int sum = 0;
    int num;
    double average;
    int count = 0;
    do {
        printf("Please enter number #%d>> ", count + 1);
        scanf("%d", &num);
        sum += num;
        count++;
    } while (count < 10);

    average = sum / 10.0;
    printf("The sum of 10 numbers is %d\n", sum);
    printf("The average is %.2lf\n", average);
    return 0;
}