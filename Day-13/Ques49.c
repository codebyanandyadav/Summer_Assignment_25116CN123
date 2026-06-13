//Enter element and display array

#include<stdio.h>
void readArray(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
}
void showArray(int arr[],int size )
{
    int i;
    printf("\nArray elements are:\n");
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}
int main() 
{
    int n,data[100];

    printf("How many elements do you want to enter ?");
    scanf("%d",&n);

    readArray(data,n);
    showArray(data,n);
    return 0;
}