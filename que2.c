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

    for(int i=0;i<size;i++)
    {
        sum = sum + a[i];
    }

    printf("sum of array element : %d",sum);
}

int main()
{
    sum_array();
}