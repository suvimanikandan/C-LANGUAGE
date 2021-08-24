#include<stdio.h>
#include<stdlib.h>

int main()
{
    double height;
    double width;
    double area;
printf("Enter height: ");
scanf("%lf",&height);
printf("Enter width: ");
    scanf("%lf",&width);

area=height*width;
    printf("Area of the rectangle =%lf\n",area);
    return 0;

}