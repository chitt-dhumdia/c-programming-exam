#include<stdio.h>

int main()
{
    int a;
    int num1,num2,sum,sub,mul;
    float div;

    printf("\n press 1  for addition");
    printf("\n press 2  for substraction");
    printf("\n press 3  for multiplication");
    printf("\n press 4 for divide");

    printf("\n enter first number : ");
    scanf("%d", &num1);

    printf("\n enter your number (+,-,*,/) : ");
    scanf("%d",&a);

    printf("\n enter second number : ");
    scanf("%d", &num2);

    switch (a)
    {
    case 1:
        sum = num1+num2;
        printf("addition is : %d",sum);
        break;
    
    case 2:
        sub = num1-num2;
        printf("substraction is : %d",sub);
        break;

    case 3:
        mul = num1*num2;
        printf("multiplication is : %d",mul);
        break;

    case 4:
        div = num1/num2;
        printf("division is : %f",div);
        break;
    
    default:
            printf("\n please enter valid input");
        break;
    }

    return 0;
}