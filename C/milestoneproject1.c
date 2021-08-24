#include<stdio.h>
#include<stdlib.h>

int main()
{
    double temperature;
    double celcius;
double fahrenheit;
printf("Enter temperature");
scanf("%lf\n",&temperature);
printf("Enter celcius");
scanf("%lf\n",&celcius);

fahrenheit=temperature*celcius*1.8 +32;

    printf("fahrenheit=%lf\n",fahrenheit);
    return 0;

}