//Binary Search

#include<stdio.h>

int main ()
{
    int n,key,start,end,middle;
    int found =0;

    printf("Enter number of elements:");
    scanf("%d",&n);

    int values[n];

    printf("Enter sorted elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&values[i]);
    }
    printf("Enter elements to search:");
    scanf("%d",&key);

    start =0;
    end = n-1;

    while(start <=end)
    {
        middle = start +(end -start)/2;

        if(values[middle]==key)
        {
            found=1;
            break;
        }
        else if(values[middle]<key)
        {
            start=middle+1;
        }
        else
        {
            end=middle-1;
        }
    }
    if(found)
    {
        printf("Element found at position %d",middle +1);
    }
    else
    {
        printf("element not present in the array");
    }
    return 0;
}