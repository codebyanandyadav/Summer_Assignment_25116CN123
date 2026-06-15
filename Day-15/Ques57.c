//reverse array

#include<stdio.h>
int main() {
    int size,i,temp;
    printf("Enter number of element:");
    scanf("%d",&size);

    int arr[size];

    printf("Enter array elements:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[size -1-i];
        arr[size-1-i]=temp;
    }
    printf("Reversed array:\n");
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}