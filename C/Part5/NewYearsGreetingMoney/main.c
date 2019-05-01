#include <stdio.h>
#include <stdlib.h>

void pick(int* items, int n, int money, int* bucket, int bucketSize, int k) {
    
    if (k == 0) {
        int sum = 0;
        for (int i = 0; i < bucketSize; i++) {
            sum += bucket[i];
        }
        
        if (sum == money) {
            for (int j = 0; j < bucketSize; j++) {
                if (bucket[j] != 0) {
                    printf("%d ", bucket[j]);
                }
            }
            printf("\n");
        }
        return;
    }
    
    int lastIndex = bucketSize - k - 1;
    
    for (int i = 0; i < n; i++) {
        if (lastIndex == -1 || bucket[lastIndex] <= items[i]) {
            bucket[lastIndex + 1] = items[i];
            pick(items, n, money, bucket, bucketSize, k - 1);
        }
    }
}

int main() {
    int items[] = {0, 1000, 5000, 10000};
    int money;
    scanf("%d", &money);
    
    int num = money / 1000; 
    int *bucket = (int*)malloc(sizeof(int) * num);
    
    pick(items, 4, money, bucket, num, num);
    return 0;
}
