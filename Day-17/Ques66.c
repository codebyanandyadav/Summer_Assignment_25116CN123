// Union of array

#include<stdio.h>
int main()
{
    int a[100],b[100],result[200];
    int n1,n2,count =0,found;

    printf("Enter size of first array:");
    scanf("%d",&n1);

    printf("Enter elements of first array:\n");
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
        result[count++]=a[i];
    }

    printf("Enter size of second array:");
    scanf("%d",&n2);

    printf("Enter elements of second array:\n");
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    for (int i=0;i<n2;i++)
    {
        found =0;
        for (int j=0;j<count;j++)
        {
            if (b[i] ==result[j])
            {
                found =1;
                break;
            }
        }
        if (!found)
        {
            result[count++] =b[i];
        }
    }

    printf("Union of arrays:\n");
    for(int i=0;i<count;i++)
    {
        printf("%d",result[i]);
    }

    return 0;
}