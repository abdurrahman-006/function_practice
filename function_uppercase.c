#include<stdio.h>

int is_uppercase(char c){
    if(c >= 'A' && c <= 'Z'){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    char ch;
    int result;
    
    printf("input a character: ");
    scanf("%c", &ch);

    result = is_uppercase(ch);

    if(result == 1){
        printf("this is uppercase.\n");
    }
    else{
        printf("this is not uppercase.\n");
    }
    return 0;
}
