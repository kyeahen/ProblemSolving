#include <stdio.h>
#include <stdlib.h>

void pick(int* items, int n, int money, int* bucket, int bucketSize, int k) {

    if (k == 0) {
        int sum = 0;
        int i = 0;
        int index = 0;
        static int flag = 0;


        for (i = 0; i < bucketSize; i++) {
            sum += items[bucket[i]];

            if (money == sum) {
                if (flag != index) {
                    for (int j = 0; j <= i; j++) {
                        printf("%d ", items[bucket[j]]);
                    }
                    printf("\n");

                    flag = index;
                }
            }
            index = i;

        }

        return;
    }

    int lastIndex = bucketSize - k - 1;
    int smallest;
    if (bucketSize == k) {
        smallest = 0;
    } else {
        smallest = bucket[lastIndex];
    }

    for(int item = smallest; item < n; item++) {
        bucket[lastIndex + 1] = item;
        pick(items, n, money, bucket, bucketSize, k - 1);
    }

}


int main() {
    int items[] = {1000, 5000, 10000};
    int money;
    scanf("%d", &money);

    int num = money / 1000; //bucket의 사이즈는 모두 1000단위로 채운다해도 충분한
    int *bucket = (int*)malloc(sizeof(int) * num);

    pick(items, 3, money, bucket, num, num);
    return 0;
}