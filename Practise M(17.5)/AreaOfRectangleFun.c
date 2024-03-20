#include <stdio.h>
#include <conio.h>

float rectangleArea(float length,float width)   //recieving parameters
{
    float area = length * width;    //calculating area
    return area;    // returning area;
}

int main()
{
    float length, width;
    printf("Enter Length and Width of rectangle : ");
    scanf("%f %f", &length, &width);    //getting length and width value of rectangle;
    float area = rectangleArea(length, width); // passing value in function and recieving area;
    printf("Area of Rectangle is = %.2f", area); // printing 2 decimal point value.
}