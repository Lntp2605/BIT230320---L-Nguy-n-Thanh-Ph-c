#include <iostream>
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 10 && num <= 50) {
        printf("You entered a number in between 10 and 50");
    }
    else {
        printf("You entered a number not in range");
    }
    return 0;
}