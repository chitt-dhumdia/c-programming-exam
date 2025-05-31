#include<stdio.h>

void sum_array()
{
    int size,sum=0;
    printf("\n please enter size of array : ");
    scanf("%d", &size);

    int a[size];

    for(int i=0;i<size;i++)
    {
        printf("a[%d]=>",i);
        scanf("%d", &a[i]);
    }

    printf("\n reverse array  : ");

    for(int i=size-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }

    for(int i=0;i<size;i++)
    {
        sum = sum + a[i];
    }

    printf("\n sum of array is : %d",sum);

    
}

int main()
{
    sum_array();
}