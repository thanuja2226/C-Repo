#include <stdio.h>
#include <stdbool.h>

int main() {
    int N;
    bool isEvenArray = true;  // Flag to check if all numbers are even

    // Read the size of the array
    scanf("%d", &N);

    int array[N];

    // Input the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }

    // Check if every element is even
    for (int i = 0; i < N; i++) {
        if (array[i] % 2 != 0) {
            isEvenArray = false;  // If any element is odd, set the flag to false
            break;
        }
    }

    // Output result
    if (isEvenArray) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
