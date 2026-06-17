//Merge array

#include<stdio.h>
int main() {
    int first[100],second[100],merged[200];
    int size1,size2,k=0;

    printf("Enter of elements in first array:");
    scanf("%d",&size1);

    printf("Enter elements of first array:\n");
    for(int i=0;i<size1;i++)
    {
        scanf("%d",&first[i]);
    }
    printf("Enter number of elements in second array:");
    scanf("%d",&size2);

    printf("Enter element of second array:\n");
    for(int i=0;i<size2;i++)
    {
        scanf("%d",&second[i]);
    }
    for (int i=0;i<size1;i++)
    {
        merged[k++]=first[i];
    }
    for(int i=0;i<size2;i++)
    {
        merged[k++]=second[i];
    }
    printf("Merged array:\n");
    for (int i=0;i<k;i++)
    {
        printf("%d",merged[i]);
    }
    return 0;

    
    
}