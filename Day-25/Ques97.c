//Merge teeo sorted arrays

#include<stdio.h>

int main()
{
    int size1,size2;

    printf("Enter size of first sorted array:");
    scanf("%d",&size1);

    int first[size1];

    printf("Enter elements of first array:\n");
    for(int i=0;i<size1;i++)
    {
        scanf("%d",&first[i]);
    }

    printf("Enter size of second sorted array:");
    scanf("%d",&size2);

    int second[size2];

    printf("Enter elements of second array:\n");
    for(int i=0;i<size2;i++)
    {
        scanf("%d",&second[i]);
    }
    int merged[size1 +size2];
    int a=0,b=0,k=0;

    while(a<size1 && b<size2)
    {
        if(first[a] <=second[b])
        {
            merged[k++] =first[a++];
        }
        else
        {
            merged[k++] = second[b++];
        }
    }
    while(a<size1)
    {
        merged[k++] = first[a++];
    }
    while(b <size2)
    {
        merged[k++] =second[b++];
    }
    printf("Merged array:\n");

    for(int i=0;i<size1 + size2;i++)
    {
        printf("%d",merged[i]);
    }
    return 0;
}