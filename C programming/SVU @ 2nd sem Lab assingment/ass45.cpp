#include <stdio.h>
#define PI 3.14159
// Function to calculate the area of a circle
double calcArea(double radius) 
{
    return PI * radius * radius;
}
// Function to calculate the perimeter of a circle
double calcPerimeter(double radius) 
{
    return 2 * PI * radius;
}

// Function to calculate the volume of a sphere
double calcVolume(double radius) 
{
    return (4.0/3.0) * PI * radius * radius * radius;
}
int main() 
{
    double radius; 
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    printf("Area of the circle is: %.2f\n", calcArea(radius));
    printf("Perimeter of the circle is: %.2f\n", calcPerimeter(radius));
    printf("Volume of the sphere is: %.2f\n", calcVolume(radius));
    return 0;
}

