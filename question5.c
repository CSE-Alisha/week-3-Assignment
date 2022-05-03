#include <stdio.h>
int largest(int *array, int n)
{
    int i, max = array[0];
    for (i = 0; i < n; i++)
    {
        if (array[i] > max)
            max = array[i];
    }
    return max;
}
int main()
{
    int array[10], i;
    printf("Enter 10 array elements:");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("The largest element is: %d", largest(array, 10));
    return 0;
}