#include<stdio.h>
#include<stdlib.h>

int main()
{
    int grade1,grade2,grade3;
    double average;
    printf("Enter grade1: ");
    scanf("%d\n",&grade1);
     printf("Enter grade2: ");
      scanf("%d\n",&grade2);
      printf("Enter grade3: ");
      scanf("%d\n",&grade3);
average=(grade1+grade2+grade3)/3;
      printf("average grade= %lf\n",average);
return 0;
}