#include <stdio.h>

int fibo(int num) {
    if (num <= 1) {
        return 1;
    }
    
    return fibo(num - 2) + fibo(num - 1);
}

int getDrink(int num) {
    if (fibo(num) == 1) {
        return 2;
    }
    
    return fibo(num + 1);
}

int main() {
    int num;
    scanf("%d", &num);
    
    int i = 0;
    while (num != fibo(i)) {
        i++;
    }
    
    printf("%d", getDrink(i));
    return 0;
}
