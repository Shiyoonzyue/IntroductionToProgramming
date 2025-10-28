#include <stdio.h>

int main() {
    char colorChoice;
    printf("Please enter your choice (B - Blue / C - Cyan / G - Green / R - Red / Y - Yellow) : ");
    scanf(" %c", &colorChoice);
    switch(colorChoice) {
        case 'B':
            printf("Your chosen color is Blue.\n");
            break;
        case 'C':
            printf("Your chosen color is Cyan.\n");
            break;
        case 'G':
            printf("Your chosen color is Green.\n");
            break;
        case 'R':
            printf("Your chosen color is Red \n");
            break;
        case 'Y':
            printf("Your chosen color is Yellow.\n");
            break;
        default:
            printf("Invalid choice! Please select a valid color option.\n");
            break;
    }
}