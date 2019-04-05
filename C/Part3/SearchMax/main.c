#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 100

int max2(int list[], int low, int high) {

    if (low == high) {
        return list[low];
    } else {
        int mid = (low + high) / 2;
        int left_max = max2(list, low, mid);
        int right_max = max2(list, mid + 1, high);

        if (left_max > right_max) {
            return left_max;
        } else {
            return right_max;
        }
    }
}


int main() {

    char input[SIZE];
    scanf(" %[^\n]", input);
    char *split = strtok(input, " ");

    char *strArr[SIZE] = {NULL, };

    int j = 0;
    while (split != NULL)
    {
        strArr[j] = split;
        j++;

        split = strtok(NULL, " ");
    }

    int numArr[j];
    for (int i = 0; i < SIZE; i++)
    {
        if (strArr[i] != NULL) {
            numArr[i] = atoi(strArr[i]);
        }
    }

    printf("%d", max2(numArr, 0, j - 1));

    return 0;
}