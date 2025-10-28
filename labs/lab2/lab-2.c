#include <stdio.h>

int main(){
    char colorChoice;
    printf("Please enter your choice (B – Blue / C – Cyan / G - Green / R – Red / Y - Yellow) : ");
    scanf(" %c", &colorChoice);

    switch (colorChoice){
        case 'B':
        case 'b':
            printf("You have chosen Blue color.\n");
            break;
        case 'C':
        case 'c':
            printf("You have chosen Cyan color.\n");
            break;
        case 'G':
        case 'g':
            printf("You have chosen Green color.\n");
            break;
        case 'R':
        case 'r':
            printf("You have chosen Red color.\n");
            break;
        case 'Y':
        case 'y':
            printf("You have chosen Yellow color.\n");
            break;
        default:
            printf("Invalid choice! Please select a valid color option.\n");
            break;
    }
    return 0;
}