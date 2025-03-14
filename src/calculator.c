#include <stdio.h>
#include <stdlib.h>
#include "calculator.h"

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b == 0) {
        fprintf(stderr,"Error: Division by zero\n");
        return 0;
    }
    return (float)a / b;
}



