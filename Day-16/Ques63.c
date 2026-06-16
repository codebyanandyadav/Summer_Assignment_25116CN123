//find pair with given sum

#include<stdio.h>

int main()
{
    int size,target;
    printf("Enter number of elements:");
    scanf("%d",&size);

    int data[size];

    printf("Enter %d elements:\n",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&data[i]);
    }
    printf("Enter required sum: ");
    scanf("%d",&target);

    int found = 0;

    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(data[i] +data[j] == target)
            {
                printf("pair found: %d and %d\n",data[i],data[j]);
                found =1;
                break;
            }
        }
        if(found)
        {
            break;
        }
    }
    if(!found)
    {
        printf("No pair gives the request sum.\n");
    }
    return 0;
}