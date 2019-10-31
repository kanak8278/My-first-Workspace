#include<stdio.h>
//this program is to find perimeter and area of rectangle
int main()
{
    float length; //the longer side of rectangle
    float wide;   //the shorter side of rectangle
    float perimeter; //sum of length of all sides of triangle
    float area;
    printf("Enter the length of rectangle:\n");
    scanf("%f", &length);
    printf("Enter the breadth of rectangle:");
    scanf("%f", &wide);
    printf("Perimeter of the rectangle:");
    printf("%f\n", 2*(length+wide));
    printf("Area of rectangle:");
    printf("%f\n", length*wide);
    return 0;
}
