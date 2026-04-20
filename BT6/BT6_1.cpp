#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}
int fib(int m) {
    if (m == 0) return 0;
    if (m == 1) return 1;
    return fib(m - 1) + fib(m - 2);
}
int add(int a, int b) {
    return a + b;
}
int sub(int a, int b) {
    return a - b;
}
int caculate(int a, int b, int (*operation)(int, int)) {
    return operation(a, b);
}

void counter() {
    static int count = 0;
    count++;
    printf("%d\n", count);
}
int tong (int n1) {
    if (n1 == 1) {
        return 1;
    }
    else {
        return n1 + tong(n1-1);
    }
}
int main() {
    printf("5! = %d", factorial(5));

    int result1 = caculate(5, 6, add);
    int result2 = caculate(5, 6, sub);
    printf("Add = %d", result1);
    printf("Sub = %d", result2);

    counter();
    counter();
    counter();

    int n1;
    printf("Enter a number:\n");
    scanf("%d", &n1);
    int S = tong(n1);
    printf("Sum = %d", S);


    return 0;
}