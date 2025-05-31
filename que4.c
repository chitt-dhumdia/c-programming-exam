#include<stdio.h>
int main()
{
    int size;
    printf("\n please enter size of array : ");
    scanf("%d", &size);

    int a[size];
    int *ptr[size];

    for(int i=0;i<size;i++)
    {
        printf("a[%d]=>",i);
        scanf("%d", &a[i]);
    }

    for(int i=0;i<size;i++)
    {
        ptr[i] = &a[i];
    }

    printf("\n cube of array element : ");

    for(int i=0;i<size;i++)
    {
        printf("%d ", *ptr[i] * *ptr[i] * *ptr[i]);
    }





    return 0;
}