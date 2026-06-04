//print armstrong number in a range

#include<stdio.h>
int main() {
    int start,end,num;

    printf("Enter a starting number :");
    scanf("%d",&start);

    printf("Enter ending number :");
    scanf("%d",&end);

    printf("armstrong number between %d and %d are :\n",start,end);

    for (num=start;num<=end;num++)
    {
        int temp=num,digit=0;
        int sum =0;

        while (temp >0)
        {
            int rem=temp %10;
            int value =1;

            for (int i=0;i < digit; i++)
            {
                value *= rem;
            }
            sum +=value;
            temp /=10;
        }

        if (sum == num)
        {
            printf("%d",num);
        }
        
    }
    return 0;
}