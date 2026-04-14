#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num >= 10 && num <= 50) {
        printf("You entered a number in between 10 and 50\n");
    }
    else {
        printf("You entered a number not in range\n");
    }

    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Sum =%d\n", num1 + num2);
    printf("Difference =%d\n", num1 - num2);
    printf("Product =%d\n", num1 * num2);
    printf("Quotient =%d\n", num1 / num2);
    printf("Exponent =%d\n", num1 % num2);

    int num3, num4;
    printf("Enter two numbers: ");
    scanf("%d %d", &num3, &num4);
    if (num3 > num4) {
        printf("%d is greater than %d\n", num3, num4);
    }
    else if (num3 < num4) {
        printf("%d is smaller than %d\n", num3, num4);
    }
    else {
        printf("%d is equal %d\n", num3, num4);
    }

    int num5 = 10;
    printf("Initial value: %d\n", num5);

    num5 += 5;  // num = num + 5
    printf("After += 5: %d\n", num5);

    num5 -= 3;  // num = num - 3
    printf("After -= 3: %d\n", num5);

    num5 *= 2;  // num = num * 2
    printf("After *= 2: %d\n", num5);

    num5 /= 4;  // num = num / 4
    printf("After /= 4: %d\n", num5);

    int num6 = atoi("123");
    printf("After atoi =%d\n", num6);

    double num7 = 3.14;
    printf("Square root of %.1f is %.1f\n", num7, sqrt(num7));

    return 0;

}
