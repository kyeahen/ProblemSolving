#include <stdio.h>

void pick (char itemArray[][20], int n, int* bucket, int bucketSize, int k) {
    int lastIndex;
    int smallest;
    int item;

    if (k == 0) {
        for (int i = 0; i < bucketSize; i++) {
            printf("%s ", itemArray[bucket[i]]);
        }
        printf("\n");
        return;
    }

    lastIndex = bucketSize - k - 1;

    smallest = 0;
    for (item = smallest; item < n; item++) {

        int found = 0;
        for (int j = 0; j <= lastIndex; j++) {
            if (bucket[j] == item) {
                found = 1;
            }
        }

        if (found == 0) {
            bucket[lastIndex + 1] = item;
            pick(itemArray, n, bucket, bucketSize, k - 1);
        }
    }
}

int main() {
    char actorArray[][20] = {"공유", "김수현", "송중기", "지성", "현빈"};

    int num;
    scanf("%d", &num);
    int bucket[num];

    pick(actorArray, 5, bucket, num, num);

    return 0;
}
