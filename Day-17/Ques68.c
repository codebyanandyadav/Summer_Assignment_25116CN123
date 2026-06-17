//Common Elements 

#include<stdio.h>
int main()
{
    int x[100],y[100];
    int m,n;

    printf("Enter number of element in first array: ");
    scanf("%d",&m);

    printf("Enter first array elements:\n");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&x[i]); 
    }
    printf("Enter number of elements in second array:");
    scanf("%d",&n);

    printf("Enter second array elements:\n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&y[i]);
    }
    printf("Common elements are:");

    for(int i=0;i<m;i++)
    {
        int alreadyPrinted =0;
        for(int k=0;k<i;k++)
        {
            if (x[k] ==x[i])
            {
                alreadyPrinted =1;
                break;
            }
        }
        if (alreadyPrinted)
            continue;
        for (int j=0;j<n;j++)
        {
            if (x[i] == y[j])
            {
                printf("%d",x[i]);
                break;
            }
        }
    }
    return 0;
}
    