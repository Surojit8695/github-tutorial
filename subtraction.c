#include <stdio.h>
int main()
{
    int x, y;
    int sub;
    printf("Enter the 1st number:");
    scanf("%d", &x);
    printf("Enter the second number:");
    scanf("%d", &y);
    sub = x - y;
    printf("The subtraction is %d ", sub);
}