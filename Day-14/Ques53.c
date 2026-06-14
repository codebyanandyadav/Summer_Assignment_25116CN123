// Linear Search

#include <stdio.h>
int main()
{
    int size,key,pos =-1;
    printf("Enter number of elements:");
    scanf("%d",&size);

    int arr[size];

    printf("Enter array elements:\n");
    for (int i=0;i<size;i++);
    {
        scanf("%d",&key);
    }
    printf("Enter value to search:");
    scanf("%d",&key);

    for (int i=0;i<size;i++)
    {
        if (arr[i]==key)
        {
            pos = i;
            break;
        }
    }
    if (pos != -1)
        printf("Element found at position %d",pos +1);
    else
        printf("Element not found");
    return 0;
}