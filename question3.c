#include <stdio.h>
int isEven(int n)
{
    if (n & 1)
        return 0;
    return 1;
}
int main()
{
    int n;
    printf("Enter a number to check: ");
    scanf("%d", &n);
    printf("The number is ");
    if (isEven(n))
        printf("Even");
    else
        printf("Odd");
    return 0;
}