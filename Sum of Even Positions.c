#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int array[N];
    int sum = 0;

    // Input array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);

        // Check if the index is even
        if (i % 2 == 0) {
            sum += array[i];
        }
    }

    // Print the sum of even indexed elements
    printf("%d\n", sum);

    return 0;
}
