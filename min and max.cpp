#include <stdio.h>
int main() {
    int numbers[] = {3, 7, 1, 9, 5};
    int min = numbers[0];
    int max = numbers[0];
    for (int i = 1; i < 5; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n");
    return 0;
}

