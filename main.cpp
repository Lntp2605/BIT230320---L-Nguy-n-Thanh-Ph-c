#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void hello () {
    printf("Hello World!\n");
}
int sum (int a, int b) {
    return a + b;
}
int main () {
    hello();

    int result = sum(5, 6);
    printf("The result is: %d\n", result);



    return 0;

}