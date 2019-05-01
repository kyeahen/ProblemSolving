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

int getSolution(int n) {
    
    int i = 0;
    int m = 0;
    while (fibo(i) != n) {
        i++;
        
        if (n == fibo(i)) {
            return getDrink(i);
        }
        
        if (fibo(i) > n) {
            m = fibo(i - 1);
            n = n - m;
            return getDrink(i - 1) + getSolution(n);
        }
    }
}

int main() {
    int num;
    scanf("%d", &num);
    
    printf("%d", getSolution(num));
    return 0;
}
