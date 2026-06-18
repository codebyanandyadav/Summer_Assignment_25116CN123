//Selection sorting

#include<stdio.h>
int main()
{
    int n,i,j,pos,swapValue;

    printf("Enter size of array:");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d elements:\n",n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j] < arr[pos])
            {
                pos =j;
            }
        }
        if(pos !=i)
        {
            swapValue=arr[i];
            arr[i]=arr[pos];
            arr[pos]=swapValue;
        }
    }
    printf("Array after sorting:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
