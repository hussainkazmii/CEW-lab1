#include <stdio.h>

int main() {
    // Declare variables
    float height;

    // Prompt user for input
    printf("Enter the height in centimeters: ");
    scanf("%f", &height);

    // Categorize the person based on height
    if (height < 150) {
        printf("Dwarf\n");
    } else if (height == 150) {
        printf("Average\n");
    } else if (height >= 165) {
        printf("Tall\n");
    } else {
        printf("Undefined category\n");
    }

    return 0;
}
