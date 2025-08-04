#include <stdio.h>

int main(void) {
    double a, b, answer;
    char c;
    int validInput = 0;

    while (!validInput) {
        printf("Enter a number: ");
        if (scanf("%lf", &a) != 1) {
            printf("Error: Invalid input. Please enter a number.\n");
            while (getchar() != '\n');
        } else {
            validInput = 1;
        }
    }


    printf("Please enter an operator (+, -, *, /): ");
    scanf(" %c", &c);

    validInput = 0;
    while (!validInput) {
        printf("Enter another number: ");
        if (scanf("%lf", &b) != 1) {
            printf("Error: Invalid input. Please enter a number.\n");
            while (getchar() != '\n');
        } else {
            validInput = 1;
        }
    }


    if (c == '+') {
        answer = a + b;
    } else if (c == '-') {
        answer = a - b;
    } else if (c == '*') {
        answer = a * b;
    } else if (c == '/') {
        if (b == 0) {
            printf("Invalid. Division by 0 is not allowed.\n");
        } else {
            answer = a / b;
        }
    } else {
        printf("Invalid operator.\n");
    }
    printf("Answer is: %.lf\n", answer);
}
