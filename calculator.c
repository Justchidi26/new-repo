#include <stdio.h>

int main(void) {
    printf("Hello!\n");

    int a;
    char c;
    int b;
    int answer;

    printf("Enter a number: ");
    scanf("%d", &a);

    while (getchar() != '\n');

    printf("Please enter an operator (+, -, *, /): ");
    scanf("%c", &c);

    printf("Enter another number: ");
    scanf("%d", &b);

    if (c == '+') {
        answer = a + b;
        printf("Answer is %d\n", answer);
    } else if (c == '-') {
        answer = a - b;
        printf("Answer is %d\n", answer);
    } else if (c == '*') {
        answer = a * b;
        printf("Answer is %d\n", answer);
    } else if (c == '/') {
        if (b == 0) {
            printf("Invalid: Division by zero\n");
        } else {
            answer = a / b;
            printf("Answer is %d\n", answer);
        }
    } else {
        printf("Invalid operator\n");
    }
}
