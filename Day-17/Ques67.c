//Intrection of arrays

#include<stdio.h>
int main ()
{
    int arr1[100],arr2[100];
    int n1,n2;

    printf("Enter size of first array:");
    scanf("%d",&n1);

    printf("Enter elements of first array:\n");
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter size of second array: ");
    scanf("%d",&n2);

    printf("Enter elements of second array:\n");
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    printf("Intersection of arrays:");
    for(int i=0;i<n1;i++)
    {
        int present =0;
        for (int j=0;j<n2 ;j++)
        {
            if (arr1[i]==arr2[j])
            {
                present =1;
                break;
            }
        }
        if (present)
        {
            int repeated = 0;
            for (int k=0;k<i;k++)
            {
                if (arr1[k] == arr1[i])
                {
                    repeated=1;
                    break;
                }
            }
            if (!repeated)
            {
                printf("%d",arr1[i]);
            }
        }
    }
    return 0;
}