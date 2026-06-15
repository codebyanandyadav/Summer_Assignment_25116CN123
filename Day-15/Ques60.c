//move zeroes to end

#include<stdio.h>
int main() {
    int n,i,pos =0;

    printf("Enter size of array:");
    scanf("%d",&n);

    int arr[n],result[n];
    printf("Enter array element:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i =0;i<n;i++)
    {
        if(arr[i] !=0)
        {
            result[pos++]=arr[i];
        }
    }
    while (pos <n)
    {
        result[pos++] =0;
    }
    printf("Array after moving zeroes to the end:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d",result[i]);
    }
    return 0;
    
    
}