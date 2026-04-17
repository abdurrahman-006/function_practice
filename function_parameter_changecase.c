#include<stdio.h>

int change_case(char c){
    char ch;

    if(c >= 'A' && c <= 'Z'){
        ch = c + ('a' - 'A');
    }
    else{
        ch = c - ('a' - 'A');
    }
}
int main(){
    char c1;

    printf("input a character: ");
    scanf("%c", &c1);

    printf("the character in opposite case: %c", change_case(c1));
    
    return 0;
}