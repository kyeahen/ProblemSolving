#include <stdio.h>
#include <stdlib.h>

void pick(int *opreator, int n, int* bucket, int bucketSize, int k) {
    int lastIndex, smallest;

    int sum = 0;
    if(k == 0) {
        printf(" ");
        for (int i = 1; i <= bucketSize; i++) {
            if (opreator[bucket[i]] == 1) {
                printf("+");
            } else {
                printf("-");
            }
            printf(" %d ", i);
            sum += (i * opreator[bucket[i]]);
        }
        printf("= %d\n", sum);
        return;
    }

    lastIndex = bucketSize - k;
    smallest = 0;
    for(int item = smallest; item < n; item++) {
        bucket[lastIndex + 1] = item;
        pick(opreator, n, bucket, bucketSize, k - 1);
    }
}

int main() {
    int num;
    scanf("%d", &num);

    int opreator[2] = {1, -1};
    int *bucket = malloc(sizeof(int) * num);

    pick(opreator, 2,  bucket, num, num);
    free(bucket);
    return 0;
}