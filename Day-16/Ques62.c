//find maximum frequency element

#include<stdio.h>
int main() {
    int n,i,j;
    printf("Enter array size:");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int maxFreq =0;
    int maxElement =arr[0];

    for(i=0;i<n;i++)
    {
        int count = 1;

        for(j=i+1;j<n;j++)
        {
            count++;
        }
    
        if(count >maxFreq)
        {
            maxFreq=count;
            maxElement=arr[i];
        }
    }
    printf("Element with maximun frequency = %d\n",maxElement);
    printf("Frequency = %d\n",maxFreq);

    return 0;
}