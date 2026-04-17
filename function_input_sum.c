#include<stdio.h>

float cal_sum(float a, float b, float c){
    float s;
    s = a + b + c;
    return s;
}

int main(){
    float num1, num2, num3;
    printf("input three number: ");
    
    scanf("%f %f %f", &num1, &num2, &num3);
    
    printf("the sum is: %.2f\n", cal_sum(num1, num2, num3));
    
    return 0;
}