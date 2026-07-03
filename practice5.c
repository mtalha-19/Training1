#include <stdio.h>

int main() {
    int n, i, num, sum = 0;
    float average;
    
    printf("How many numbers do you want to average? ");
    scanf("%d", &n);
    
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &num);
        sum += num;
    }
    
    average = (float)sum / n;
    printf("Average of %d numbers: %.2f\n", n, average);
    
    return 0;
}