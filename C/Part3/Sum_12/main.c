#include <stdio.h>

int sum(int n);
int solution(int n);


int sum(int n) {
    static int total = 0;

    if (n == 1) {
        return 12;
    }

    total = sum(n - 1) + 10;
    return total;
}

int solution(int n) {
    static int result = 0;

    if (n == 1) {
        return 12;
    }

    result = sum(n) + solution(n - 1);
    return result;
}

int main() {
    int num;
    scanf("%d", &num);


    printf("%d", solution(num));
    return 0;
}

