#include <stdio.h>
int main()
{
    int x, y;
    prntf("Enter two integers:\n ");
if (scanf("%d %d", &x, &y) == 2){
    printf("Sum: %d\n", x + y);

} else {
    printf("Invalid Inpt:\n");
}
return 0;
}