#include<stdio.h>

int is_even(int a){
    if(a % 2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int num, result;

    printf("input a number: ");
    scanf("%d", &num);

    result = is_even(num);
    
    if(result == 1){
        printf("this is even number.\n", num);
    }
    else{
        printf("this is odd number.\n", num);
    }
    return 0;
}