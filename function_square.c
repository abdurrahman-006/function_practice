#include<stdio.h>

int square(int num){
    return num * num;
}
int main(){
    int n;
    printf("input a number: ");
    scanf("%d", &n);

    printf("Result is: %d", square(n));
}