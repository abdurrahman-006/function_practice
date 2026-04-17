#include<stdio.h>
float getArea(float side1, float side2){
    float Area;
    Area = side1 * side2;

    return Area;
}
float getPerimeter(float side1, float side2){
    float Perimeter;
    Perimeter = 2 * (side1 + side2);

    return Perimeter;
}
int main(){
    float height, width;

    printf("Input Height and Width: ");
    scanf("%f %f", &height, &width);

    printf("Area is: %.2f\n", getArea(height, width));
    printf("Perimeter is: %.2f\n", getPerimeter(height, width));

    return 0;
}