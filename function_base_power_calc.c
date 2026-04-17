#include<stdio.h>

int cal_power(int base, int exp){
    int result = 1, i;
    for(i = 1; i <= exp; i++){
        result *= base;
    }
    return result;
}

int main(){
    int num1, num2;
    printf("input base and exp: ");
    scanf("%d %d", &num1, &num2);

    printf("Result is: %d", cal_power(num1, num2));
    return 0;
}