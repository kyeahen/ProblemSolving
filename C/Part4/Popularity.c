#include <stdio.h>

void printItem(int bucketNum) {
    switch (bucketNum) {
        case 0 :
            printf("공유 ");
            break;
        case 1 :
            printf("김수현 ");
            break;
        case 2 :
            printf("송중기 ");
            break;
        case 3 :
            printf("지성 ");
            break;
        case 4 :
            printf("현빈 ");
            break;
    }
}

void pick (char* itemArray[], int n, int* bucket, int bucketSize, int k) {

    int lastIndex;
    int smallest;
    int item;

    if (k == 0) {
        for (int i = 0; i < bucketSize; i++) {
            printItem(bucket[i]);
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

    char actorArray[5][20] = {"공유", "김수현", "송중기", "지성", "햔빈"};

    int num;
    scanf("%d", &num);
    int bucket[num];

    pick(actorArray, 5, bucket, num, num);
    return 0;
}
