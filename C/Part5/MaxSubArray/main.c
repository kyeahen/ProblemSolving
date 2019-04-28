#include <stdio.h>
#include <stdlib.h>
int max(int a, int b) { return (a > b)? a : b; }

int right_max_sum(int *A, int left, int right) {
    int max = A[left];
    int sum = 0;
    for(int i = left; i <= right; i++) {
        sum += A[i];

        if (max < sum) {
            max = sum;
        }
    }

    return sum;
}

int left_max_sum(int *A, int left, int right) {
    int max = A[right];
    int sum = 0;
    for(int i = right; i >= left; i--) {
        sum += A[i];

        if (max < sum) {
            max = sum;
        }
    }

    return sum;
}

int max_subarray(int *A, int left, int right) {

    if (left == right) {

        return A[left];
    }

    int mid = (left + right) / 2;

    int total = right_max_sum(A, left, mid) + left_max_sum(A, mid + 1, right);
    int m = max(max_subarray(A, left, mid), max_subarray(A, mid + 1, right));

    return max(total, m);
}

int main() {
//    int A[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4}; // tc #1: max는 6
//int A[] = {2, -1, 5, -2, 2, -3, 1}; // tc #2: max는 6
//int A[] = {3, -1, 1, 2, 3, 1, -1, 5}; // tc #3: max는 13
//int A[] = {1, 2, 3}; // tc #4: max는 6
//int A[] = {-1, -2, -3, -4}; //tc #5: max는 -1
//int A[] = {5}; // tc #6: max는 5

    int size;
    scanf("%d", &size);

    int *A = (int*)malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &A[i]);
    }

    int max = max_subarray(A, 0, size - 1);
    printf("%d\n", max);
}