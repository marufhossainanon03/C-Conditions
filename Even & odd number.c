#include <stdio.h>
#include<conio.h>
int main()
{
    int num1, rem1;

    printf("Input an number : ");
    scanf("%d", &num1);
    rem1 = num1 % 2;
    if (rem1 == 0)
        printf(" It is an even number\n");
    else
        printf(" It is an odd number\n");


    getch ();

}
