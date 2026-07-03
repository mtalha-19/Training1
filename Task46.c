#include <stdio.h>

int main() {
    int grades[] = {10, 5, 2, 3, 8};  // Example array
    
    // Display product of first four elements
    printf("Product of first four elements: %d", 
           grades[0] * grades[1] * grades[2] * grades[3]);
    
    return 0;
}
// Output: Product of first four elements: 300
// (10 * 5 * 2 * 3 = 300)