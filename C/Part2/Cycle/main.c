#include <stdio.h>

int solution(int n) {
    int i = 0;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = n* 3 + 1;
        }

        i++;
    }

    return i + 1;
}

int main() {
    int num;
    scanf("%d", &num);

    printf("%d", solution(num));
    return 0;
}
