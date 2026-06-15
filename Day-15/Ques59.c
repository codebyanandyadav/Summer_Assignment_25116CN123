//rotation array right

#include<stdio.h>
int main() {
    int count,idx;

    printf("Enter number of element:");
    scanf("%d",&count);

    int values[count];

    printf("Enter array element:\n");
    for(idx=0;idx<count;idx++)
    {
        scanf("%d",&values[idx]);
    }
    int lastItem=values[count -1];
    for(idx=count-1;idx>0;idx--)
    {
        values[idx]=values[idx-1];
    }
    values[0]=lastItem;
    printf("Array after right rotation:\n");
    for(idx=0;idx<count;idx++)
    {
        printf("%d",values[idx]);
    }

    return 0;

}