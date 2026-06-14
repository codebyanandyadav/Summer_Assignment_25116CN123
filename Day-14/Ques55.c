//Second largest element

#include<stdio.h>
int main() {
    int arr[100];
    int n,i;
    int largest,secondLargest;

    printf("Enter number of element:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    largest=secondLargest=-2147483648;
    for(i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            secondLargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondLargest &&arr[i] != largest)
        {
            secondLargest = arr[i];

        }
    }
    printf("\nsecond largest element =%d\n",secondLargest);

    return 0;
}
