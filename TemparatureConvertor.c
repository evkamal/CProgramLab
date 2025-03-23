#include <stdio.h>
#include<conio.h>
void main()
{
    float c, f;
    printf("enter the tempreture in celsius: ");
    scanf("%f", &c);
    f = 9.0 / 5.0 * c + 32;
    printf("the tempreture is fahrenheitis %6.2f", f);
    getch();
}