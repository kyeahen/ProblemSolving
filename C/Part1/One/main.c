#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int addOne(int c) {
    char one[50];
    sprintf(one, "%d", c);
    one[strlen(one)] += '1';
    return atoi(one);
}

int main() {
    int num;
    scanf("%d", &num);

    int result = 1;
    int i = 0;
    int flag = 0;
    while (result % num != 0) {

        if (result < 0) {
            printf("Overflow");
            flag = 1;
            break;
        }

        if (num * i == result) {
            break;
        }
        result = addOne(result);
        i++;
    }

    if (flag == 0) {
        char strResult[50];
        sprintf(strResult, "%d", result);
        printf("%d", strlen(strResult));
    }

    return 0;
}