#include <stdio.h>
#include <stdlib.h>
#include "calculator.h"

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: %s <operation> <num1> <num2>\n", argv[0]);
        return 1;
    }

    int num1 = atoi(argv[2]);
    int num2 = atoi(argv[3]);
    char op = argv[1][0];

    switch (op) {
        case '+':
            printf("%d\n", add(num1, num2));
            break;
        case '-':
            printf("%d\n", subtract(num1, num2));
            break;
        case '*':
            printf("%d\n", multiply(num1, num2));
            break;
        case '/':
            if (num2 == 0) {
                fprintf(stderr, "Error: Division by zero\n"); 
                return 1;
            }
            printf("%.2f\n", divide(num1, num2));
            break;
        default:
            printf("Invalid operation\n");
            return 1;
    }
    return 0;
}

