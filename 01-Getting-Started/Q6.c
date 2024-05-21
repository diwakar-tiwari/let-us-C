// Paper of size A0 has dimensions 1189 mm x 841 mm. Each
// subsequent size A(n) is defined as A(n-1) cut in half, parallel to its
// shorter sides. Thus, paper of size A1 would have dimensions 841
// mm x 594 mm. Write a program to calculate and print paper sizes
// A0, A1, A2, … A8.


#include <stdio.h>

void calculatePaperSizes() {
    // Initial dimensions of A0
    int width = 1189;
    int height = 841;

    // Print dimensions for A0
    printf("A0: %d mm x %d mm\n", width, height);

    // Calculate and print dimensions for A1 to A8
    for (int i = 1; i <= 8; i++) {
        // For each size, the new dimensions are half the previous dimensions
        if (width > height) {
            width /= 2;
        } else {
            height /= 2;
        }
        printf("A%d: %d mm x %d mm\n", i, width, height);
    }
}

int main() {
    calculatePaperSizes();
    return 0;
}
