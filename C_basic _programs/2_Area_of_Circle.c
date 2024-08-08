#include<stdio.h>
#include<conio.h>
int main()
{
    clrscr();
   
    int radius;
    float circle,circumference;
    printf("Enter value of radius :");
    scanf("%d",&radius);

    // Calculating area of circle
    circle=3.14*radius*radius;
    printf("Area of circle : %f\n",circle);

    // Calculating area of circumference
    circumference=2*3.14*radius;
    printf("Area of circumference :%f",circumference);

    getch();
    return 0;
}

