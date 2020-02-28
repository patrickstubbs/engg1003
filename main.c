#include <stdio.h>

int main() {
    float x;
    float y;
    printf("Enter an number: ");
    scanf("%f", &x); // Note change of %d to %f
    // Complete the y = line below
    y = 3*x + 4; // new stuff
    printf("y: %f\n", y);
    return 0;
}
