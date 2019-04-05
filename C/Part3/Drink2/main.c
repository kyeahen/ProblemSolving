#include <stdio.h>

int fibo(int n) {
    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    return fibo(n - 1) + fibo(n - 2);
}

int getDrink(int index) {

    if (index == 1) {
        return 2;
    }

    return fibo(index + 1);
}

int main() {
    int num;
    scanf("%d", &num);

    int i = 0;
    int m = 0;
    int result = 0;
    while (fibo(i) != num) {

        if (fibo(i) > num) {
            m = fibo(i - 1);
            result += getDrink(i - 1);
            printf("%d\n", m);
            num = num - m;
            i = 0;
        }

        i++;
    }
    result += getDrink(i);

    printf("%d", result);
    return 0;
}