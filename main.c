#include <stdio.h>
#include <stdlib.h>


int main()
{
    int Operator;

    int x,y;
    printf("Enter Number operator \n 1(+):\n 2(-):\n 3(*):\n 4(/):\n 5(reminder):\n");
    scanf("%d",&Operator);
    switch (Operator)
    {
        case 1:
        printf("please enter Number_1 :\n");
        scanf("%d",&x);
        printf("please enter Number_2 :\n");
        scanf("%d",&y);
        int x1 = x+y ;
        printf("The Result equal :%d\n",x1);
        break;

        case 2:
        printf("please enter Number_1 :\n");
        scanf("%d",&x);
        printf("please enter Number_2 :\n");
        scanf("%d",&y);
        int x2 = x-y ;
        printf("%d\n",x2);
        break;

        case 3:
        printf("please enter Number_1 :\n");
        scanf("%d",&x);
        printf("please enter Number_2 :\n");
        scanf("%d",&y);
        int x3 = x*y ;
        printf("%d\n",x3);
        break;

        case 4:
        printf("please enter Number_1 :\n");
        scanf("%d",&x);
        printf("please enter Number_2 :\n");
        scanf("%d",&y);
        int x4 = x/y ;
        printf("%d\n",x4);
        break;

        case 5:
        printf("please enter Number_1 :\n");
        scanf("%d",&x);
        printf("please enter Number_2 :\n");
        scanf("%d",&y);
        int x5 = x%y ;
        printf("%d\n",x5);
        break;

    }
}
