#include "metrics.h"

int sum_values(const int *arr, int count) {
    int i;
    int sum = 0;
    for (i = 0; i < count; i++) {
        sum += arr[i];
    }
    return sum;
}

double average_values(const int *arr, int count) {
    if (count <= 0) {
        return 0.0;
    }
    return (double)sum_values(arr, count) / (double)count;
}

int max_value(const int *arr, int count) {
    int i;
    int max = arr[0];
    for (i = 1; i < count; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
