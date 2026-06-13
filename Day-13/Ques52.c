//Count even and odd number
#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int evenCount = 0, oddCount = 0;

    printf("Enter total elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    printf("\nNumber of even elements = %d", evenCount);
    printf("\nNumber of odd elements = %d", oddCount);

    return 0;
}