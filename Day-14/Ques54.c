//frequency of an element

#include<stdio.h>
int main() {
    int n ,value, count =0;
    printf("Enter size of array:");
    scanf("%d",&n);

    int data[n];
    printf("Enter array element:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&value);
    }
    printf("Enter element to find frequency:");
    scanf("%d",&value);

    for(int i=0;i<n;i++)
    {
        ("%d",&data[i]);
    }
    printf("Enter element to find frequency:");
    scanf("%d",&value);

    for (int i=0;i<n;i++)
    {
        if (data[i] == value)
        {
            count++;
        }
    }
    printf("frequency of %d=%d",value,count);
    return 0;
}