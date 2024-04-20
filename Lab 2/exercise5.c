//Exercise 5:
#include <stdio.h>

int main(){
int a,b,c;

printf("Enter the sides of triangle: ");
scanf("%d %d %d", &a, &b, &c);

if(a!=b && b!=c && c!=a)
printf("The triangle is a scalene triangle");
else if(a==b && b==c)
printf("The triangle is an equilateral triangle.");
else
printf("The triangle is an isosceles triangle.");

    return 0;
}
