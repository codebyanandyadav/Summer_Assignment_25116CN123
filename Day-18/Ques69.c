//bubble sorting

#include<stdio.h>
int main () 
{
    int count,i,step,temp;

    printf("Enter number of elements :");
    scanf("%d",&count);

    int data[count];

    printf("Enter elements:\n");
    for(i=0;i<count;i++)
    {
        scanf("%d",&data[i]);
    }
    for(step=0; step<count-1;step++)
    {
        int swapped =0;

        for(i=0;i<count -step-1;i++)
        {
            if(data[i]>data[i+1])
            {
                temp=data[i];
                data[i]=data[i+1];
                data[i+1]=temp;
                swapped =1;
            }
        }
        if(swapped ==0)
        {
            break;
        }
    }
    printf("Sorted array:\n");
    for(i=0;i<count;i++)
    {
        printf("%d",data[i]);
    }
    return 0;
}