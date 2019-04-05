#include <stdio.h>

int main(void) {

    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int count = 0;
    while(num1 != 0 && num2 != 0) {

        int next1 = num1 % 10;
        int next2 = num2 % 10;
        int sum = next1 + next2;

        if (sum >= 10) {
            count++;
        }

        num1 /= 10;
        num2 /= 10;
    }

    while (num1 != 0) {

        int sum = num1 + 1;

        if (sum >= 10) {
            count++;
        }

        num1 /= 10;
    }

    while (num2 != 0) {

        int sum = num2 + 1;

        if (sum >= 10) {
            count++;
        }

        num2 /= 10;
    }

    printf("%d", count);

    return 0;
}
