// arithmetic example 

/* difference ->d=2
initial term ->a1=1
total terrms ->n=9
n th terms-> an=17
*/

#include<stdio.h>
#include<stdlib.h>
// nth term of an arithmetic sequence
// an= a1 + (n-1)*d
int main()
{
float a1,d,an;
int n;
printf("Enter the Intial Term(a1): ");
scanf("%f",&a1);
printf("Enter the difference in the arithmetic sequence: ");
scanf("%f",&d);
printf("Enter the number of elements in the arithmetic sequence: ");
scanf("%f",&n);
an=a1+(n-1)*d;printf("the n-th term of the arithmetic sequence = %f\n",an);


return 0;
}
