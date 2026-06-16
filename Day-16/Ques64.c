//Remove duplicate element from an array

#include<stdio.h>
int main() {
    int n;
    printf("Enter the size ogf array:");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int newSize =n;

    for(int i=0;i<newSize;i++)
    {
        for(int j=i+1;j<newSize;)
        {
            if(arr[i] ==arr[j])
            {
                for(int k=j;k<newSize-1;k++)
                {
                    arr[k] =arr[k+1];
                }
                newSize--;
            }
            else
            {
                j++;
            }
        }
    }
    printf("Array after removing duplicates:\n");

    for(int i=0;i<newSize;i++)
    {
        printf("%d",arr[i]);
    }

    printf("\n");

    return 0;
}