//find sum and average of array

#include<stdio.h>
float calculateAverage(int total,int count)
{
    return (float)total/count;
}

int main()
{
    int arr[100];
    int n,i;
    int sum=0;
    float avg;
    printf("Enter number of elements:");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        printf("Element %d:",i+1);
        scanf("%d",&arr[i]);

        sum += arr[i];
    }

    avg = calculateAverage(sum,n);
    printf("\nSum = %d\n",sum);
    printf("Average = %.2f\n",avg);

    return 0;
}
