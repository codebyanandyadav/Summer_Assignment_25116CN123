//find largest and smallest number

#include<stdio.h>
int main()
{
    int numbers[100];
    int n,i;
    int largest,smallest;

    printf("Enter the size of array :");
    scanf("%d",&n);

    for (i =0;i<n;i++)
    {
        printf("Enter value %d:",i+1);
        scanf("%d",&numbers[i]);
    }

    largest =smallest=numbers[0];

    for(i=1;i<n;i++)
    {
        if(numbers[i] > largest)
        {
            largest =numbers[1];
        }
        if(numbers[i] < smallest)
        {
            smallest =numbers[i];
        }
    }
    printf("\nLargest element =%d",largest);
    printf("\nSmallest element =%d",smallest);

    return 0;
    
}