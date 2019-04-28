#include <stdio.h>

void pick (char* itemArray, int n, int* bucket, int bucketSize, int k) {

    int lastIndex;
    int smallest;
    int item;

    if (k == 0) {
        for (int i = 0; i < bucketSize; i++) {
            printf("%c ", itemArray[bucket[i]]);
        }
        printf("\n");
        return;
    }

    lastIndex = bucketSize - k - 1;

    if (bucketSize == k) {
        smallest = 0;
    } else {
        smallest = bucket[lastIndex] + 1;
    }

    for (item = smallest; item < n; item++) {
        bucket[lastIndex + 1] = item;
        pick(itemArray, n, bucket, bucketSize, k - 1);
    }
}

int main() {

    char itemArray[7] = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};

    int num;
    scanf("%d", &num);
    char bucket[num];

    pick(itemArray, 7, bucket, num, num);
    return 0;
}
