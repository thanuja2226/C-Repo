#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int array[N];
    int sumEven = 0, sumOdd = 0;

    // Input array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);

        // Check if the element is even or odd
        if (array[i] % 2 == 0) {
            sumEven += array[i];  // Add to even sum
        } else {
            sumOdd += array[i];   // Add to odd sum
        }
    }

    // Calculate the absolute difference
    int difference = sumEven - sumOdd;
    if (difference < 0) {
        difference = -difference;
    }

    // Print the absolute difference
    printf("%d\n", difference);

    return 0;
}
