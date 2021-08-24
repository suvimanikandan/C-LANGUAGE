#include<stdio.h>
#include<stdlib.h>

int main()
{
    int currentYear;
    int age;
    int birthYear;
    
    scanf("%d",&currentYear);
    scanf("%d",&age);

    birthYear =currentYear-age;

    printf("you were born in %d\n",birthYear);
    return 0;

}