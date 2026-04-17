#include<stdio.h>
int digitCount(int n){

    int count = 0;

    do{
        count++;
        n = n / 10;
    }while( n > 0);

    return count;
}
int main(){
    int num, result;

    printf("input a positive integer: ");
    scanf("%d", &num);

    result = digitCount(num);

    printf("%d has %d digit(s).\n", num, result);
    
    return 0;
}