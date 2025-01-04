#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int array[N];
    int sum = 0;

    // Input array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);

        // Check if the number is even
        if (array[i] % 2 == 0) {
            sum += array[i];
        }
    }

    // Print the sum of even numbers
    printf("%d\n", sum);

    return 0;
}
