#include <stdio.h>
#include <stdlib.h>

#include "metrics.h"

int main(int argc, char *argv[]) {
    int count;
    int i;
    int *values;

    if (argc < 2) {
        fprintf(stderr, "Usage: %s <value1> <value2> ...\n", argv[0]);
        return 1;
    }

    count = argc - 1;
    values = (int *)malloc(sizeof(int) * count);
    if (values == 0) {
        fprintf(stderr, "Allocation failed.\n");
        return 1;
    }

    for (i = 0; i < count; i++) {
        values[i] = atoi(argv[i + 1]);
    }

    printf("Count: %d\n", count);
    printf("Sum: %d\n", sum_values(values, count));
    printf("Average: %.2f\n", average_values(values, count));
    printf("Max: %d\n", max_value(values, count));

    free(values);
    return 0;
}
