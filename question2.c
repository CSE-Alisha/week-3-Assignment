#include <stdio.h>
int isPrime(int n, int k)
{
    if (k < 2)
    {
        return 1;
    }
    else if (n % k == 0)
    {
        return 0;
    }
    else
        isPrime(n, k - 1);
}
int main()
{
    int n;
    printf("Enter a number to check: ");
    scanf("%d", &n);
    printf("%d is ", n);
    if (!isPrime(n, n - 1))
        printf("not ");
    printf("Prime");
    return 0;
}