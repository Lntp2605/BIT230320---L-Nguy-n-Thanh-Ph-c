#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int main() {
    int x = 10;
    {
        int y = 20;
        printf("x = %d,y = %d\n", x, y);
        {
            int z= 30;
            printf("x = %d,y = %d,z = %d", x, y, z);
        }
    }
    printf("x = %d\n",x);

    int globalVar = 100;
    


    return 0;
}