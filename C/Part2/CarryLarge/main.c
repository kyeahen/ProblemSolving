#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//마지막 배열 원소를 삭제하는 함수
void removeEnd(char *num) {
    int i = 0;
    while (num[i]) { //num[i]가 참(널문자가 아님)이면 반복
        i++;
    }

    num[i - 1] = '\0'; //현재 i는 널문자가 있는 위치 / i-1은 마지막 문자 위치
    return;
}

int main(void) {
    char num1[41], num2[41];
    scanf("%s %s", &num1, &num2);

    int count = 0;
    int flag = 0;
    while(strlen(num1) != 0 && strlen(num2) != 0) {
        int next1 = num1[strlen(num1) - 1] - '0';
        int next2 = num2[strlen(num2) - 1] - '0';
        int sum = next1 + next2;

        if (flag == 1 && sum == 9) { //원래의 합은 10 미만이나 이전의 Carry로 인하여 Carry가 발생할 경
            count++;
            flag = 0;
        }

        if (sum >= 10) {
            count++;
            flag = 1;
        } else {
            flag = 0;
        }

        removeEnd(num1);
        removeEnd(num2);
    }

    while (strlen(num1) != 0) {
        int sum = (num1[strlen(num1) - 1] - '0') + 1;

        if (sum >= 10) {
            count++;
        }

        removeEnd(num1);
    }


    while (strlen(num2) != 0) {
        int sum = (num2[strlen(num2) - 1] - '0') + 1;

        if (sum >= 10) {
            count++;
        }

        removeEnd(num2);
    }

    printf("%d", count);
    return 0;
}
