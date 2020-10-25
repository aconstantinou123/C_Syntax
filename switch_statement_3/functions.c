#ifndef M_PI
#    define M_PI 3.1415926535897932
#endif
#include <stdio.h>
#include <stdint.h>
#include <math.h>

void waitForUserInput(void)
{
    printf("Press any key to exit\n");
    while (getchar() != '\n')
    {
    }
    getchar();
}

int validateInput(int isValid, float input)
{
    if(!isValid){
        printf("Invald value\n");
        waitForUserInput();
        return 0;
    }
    if(input <= 0) {
        printf("Amount must be greater than 0\n");
        waitForUserInput();
        return 0;
    }
    return 1;
}

void calculateTriangleArea(void)
{
    float height, base, area;
    int isFloatHeight, isFloatBase, isValidHeight, isValidBase;
    printf("Please enter the height: \n");
    isFloatHeight = scanf("%f", &height);
    isValidHeight = validateInput(isFloatHeight, height);
    if(!isValidHeight){
        return;
    }
    printf("Please enter the base length: \n");
    isFloatBase = scanf("%f", &base);
    isValidBase = validateInput(isFloatBase, base);
    if(!isValidBase){
        return;
    }
    area = (height * base) / 2;
    printf("Area: %.2f\n", area);
    waitForUserInput();
}

void calculateRectangleArea(void)
{
    float height, width, area;
    int isFloatHeight, isFloatBase, isValidHeight, isValidBase;
    printf("Please enter the height: \n");
    isFloatHeight = scanf("%f", &height);
    isValidHeight = validateInput(isFloatHeight, height);
    if(!isValidHeight){
        return;
    }
    printf("Please enter the width length: \n");
    isFloatBase = scanf("%f", &width);
    isValidBase = validateInput(isFloatBase, width);
    if(!isValidBase){
        return;
    }
    area = height * width;
    printf("Area: %.2f\n", area);
    waitForUserInput();
}

void calculateCircleArea(void)
{
    float radius, area;
    int isFloatRadius, isValidRadius;
    printf("Please enter the radius length: \n");
    isFloatRadius = scanf("%f", &radius);
    isValidRadius = validateInput(isFloatRadius, radius);
    if(!isValidRadius){
        return;
    }
    area = M_PI * pow(radius, 2);
    printf("Area: %.2f\n", area);
    waitForUserInput();
}

void calculateSquareArea(void)
{
    float side, area;
    int isFloatRadius, isValidRadius;
    printf("Please enter the side length: \n");
    isFloatRadius = scanf("%f", &side);
    isValidRadius = validateInput(isFloatRadius, side);
    if(!isValidRadius){
        return;
    }
    area = side * side;
    printf("Area: %.2f\n", area);
    waitForUserInput();
}

void calculateTrapezoidArea(void)
{
    float a, b, h, area;
    int isFloatHeight, isFloatBase1, 
        isValidHeight, isValidBase1,
        isValidBase2, isFloatBase2;
    printf("Please enter the height: \n");
    isFloatHeight = scanf("%f", &h);
    isValidHeight = validateInput(isFloatHeight, h);
    if(!isValidHeight){
        return;
    }
    printf("Please enter the top base length: \n");
    isFloatBase1 = scanf("%f", &a);
    isValidBase1 = validateInput(isFloatBase1, a);
    if(!isValidBase1){
        return;
    }
    printf("Please enter the bottom base length: \n");
    isFloatBase2 = scanf("%f", &b);
    isValidBase2 = validateInput(isFloatBase2, b);
    if(!isValidBase2){
        return;
    }
    area = ((a + b) / 2) * h;
    printf("Area: %.2f\n", area);
    waitForUserInput();
}

void calculateShapeAreas(void)
{
    char input;
    int isValid;
    printf("Please enter a letter for shape's"
          "area you wish to find out: \n"
          "t - Triangle\n"
          "z - Trapezoid\n"
          "c - Circle\n"
          "s - Square\n"
          "r - Rectangle\n");
    isValid = scanf(" %c", &input);
    if(!isValid) {
        printf("Not a valid input");
        return;
    }
    switch (input)
    {
    case 't':
        calculateTriangleArea();
        break;
    case 'z':
        calculateTrapezoidArea();
        break;
    case 'c':
        calculateCircleArea();
        break;
    case 's':
        calculateSquareArea();
        break;
    case 'r':
        calculateRectangleArea();
        break;
    default:
        printf("Invalid Choice\n");
        break;
    }
}