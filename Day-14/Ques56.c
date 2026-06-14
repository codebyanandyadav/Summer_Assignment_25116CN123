//find duplicate array

#include<stdio.h>
int main() {
    int arr[100];
    int n,i,j;
    int found =0;
    printf("Enter number of elements:");
    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nDuplicate elements are:\n");
    for (i=0;i<n;i++)
    {
        int alreadyPrinted =0;

        for(j =0;j<i;j++)
        {
            if(arr[i] == arr[j])
            {
                alreadyPrinted=1;
                break;
            }
        }
        if(alreadyPrinted)
            continue;
        for(j=i+1;j<n;j++)
        {
            if(arr[i] == arr[j])
            {
                printf("%d",arr[i]);
                found=1;
                break;
            }
        }
    }
    if(!found)
    {
        printf("No duplicate element found.");
    }
    printf("\n");
    
    return 0;
}