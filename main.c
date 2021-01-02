/*
Author: Preetam Hegde
Purpose: This program calculates perimeter and area of Rectangle
Date: 02/01/2020
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
   // Initializing the variables
   double length;
   double width;
   double perimeter;
   double area;

   // taking the inputs from user
   printf("Enter the length and width of rectangle\n");
   scanf("%lf %lf",&length,&width);

   //Calculation of perimeter and area
   perimeter= 2*(length+width);
   area= length*width;

   // Printing the results
   printf("Length of rectangle is %f, Width of rectangle is %f\n",length,width);
   printf("Perimeter of rectangle is %f\n",perimeter);
   printf("Area of rectangle is %f\n", area);

}
