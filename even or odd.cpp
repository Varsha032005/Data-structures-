#include <stdio.h>

int main() {
    int n, num, evenCount = 0, oddCount = 0;

    printf("Enter the total numbers: ");
    scanf("%d", &n);

    printf("Enter the numbers: ");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &num);
        if (num % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    printf("Number of even elements: %d\n", evenCount);
    printf("Number of odd elements: %d\n", oddCount);

    return 0;
}
