#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//숫자를 역순으로 바꾸는 메소드
int reverse(int num) {

    char stringNumber[50];
    sprintf(stringNumber, "%d", num);

    char reverse[50];
    for (int i = 0; i < strlen(stringNumber); i++) {
        reverse[i] = stringNumber[strlen(stringNumber) - i - 1];
    }

    return atoi(reverse);
}


int main(void) {

    int num;
    scanf("%d", &num);

    int i = 0;
    int sum = 0;
    int flag = 0;
    while (num != reverse(num)) {
        sum = num + reverse(num);
        num = sum;
        i++;

        if (reverse(num) < 0) {
            printf("Overflow");
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        printf("%d %d", i, sum);
    }

    return 0;
}
