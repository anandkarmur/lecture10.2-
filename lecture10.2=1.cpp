#include <stdio.h>


int sumOfArray(int a[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += a[i];
    }
    return sum;
}

int main()
{
    int size;
    
    printf("Enter array size: ");
    scanf("%d", &size);
    
    int a[size];
    
    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    
    int sum = sumOfArray(a, size);
    
    printf("The sum of an Array: %d\n", sum);
    
    return 0;
}
