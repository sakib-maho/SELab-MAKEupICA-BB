#include <stdio.h>

#include "metrics.h"

int main(void) {
    int values[] = {1, 3, 5, 7};
    if (sum_values(values, 4) != 16) {
        return 1;
    }
    if (max_value(values, 4) != 7) {
        return 1;
    }
    if (average_values(values, 4) < 3.99 || average_values(values, 4) > 4.01) {
        return 1;
    }
    printf("All tests passed.\n");
    return 0;
}
