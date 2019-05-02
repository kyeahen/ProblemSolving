#include <stdio.h>

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    
    int carry = 0;
    int flag = 0; //이전 자릿 수의 Carry 여부 판별 변수
    
    while (num1 != 0 && num2 != 0) {
        int a = num1 % 10;
        int b = num2 % 10;
        int sum = a + b;
        
        if (sum >= 10) {
            carry++;
            flag = 1;
        } else {
            flag = 0;
        }
        
        num1 = num1 / 10;
        num2 = num2 / 10;
    }
    
    while (num1 != 0) {
        int a = num1 % 10;
        int sum = a + 1;
        
        if (sum >= 10 && flag == 1) {
            carry++;
        }
        
        num1 = num1 / 10;
        
    }
    
    while (num2 != 0) {
        int b = num2 % 10;
        int sum = b + 1;
        
        if (sum >= 10 && flag == 1) {
            carry++;
        }
        
        num2 = num2 / 10;
        
    }
    
    printf("%d", carry);
    return 0;
}
