//rotate array left

#include<stdio.h>
int main() {
    int n,k;
    printf("Enter size of array:");
    scanf("%d",&n);

    int data[n];
    printf("Enter %d element:\n",n);
    for(k=0; k<n ; k++ )
    {
        scanf("%d",&data[k]);
    }
    int firstValue =data[0];

    for(k=0 ; k<n; k++)
    {
        data[k] = data[k +1];
    }
    data[n-1] =firstValue;

    printf("Array after left rotation:\n");

    for(k=0;k<n;k++)
    {
        printf("%d",data[k]);
    }
    return 0;

}