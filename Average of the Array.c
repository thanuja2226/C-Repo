#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    float array[N], sum = 0.0;

    // Input array elements
    for (int i = 0; i < N; i++) {
        scanf("%f", &array[i]);
        sum += array[i];  // Calculate sum
    }

    // Calculate and print the average
    float average = sum / N;
    printf("%.2f\n", average);

    return 0;
}
