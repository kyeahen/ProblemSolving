#include <stdio.h>
#include <stdlib.h>
void pick(int n, int* bucket, int bucketSize, int k) {

    int lastIndex;
    int smallest;
    int item;

    if (k == 0) {
        for (int i = 0; i < bucketSize; i++) {
            printf("%d ", bucket[i]);
        }
        printf("\n");
        return;
    }

    lastIndex = bucketSize - k - 1;

    smallest = 0;
    for (item = smallest; item < n; item++) {

        bucket[lastIndex + 1] = item;
        pick(n, bucket, bucketSize, k - 1);
    }
}

int main() {

    int num;
    scanf("%d", &num);

    int *bucket = malloc(sizeof(int) * num);
    pick(4, bucket, num, num);
    free(bucket);

    return 0;
}
