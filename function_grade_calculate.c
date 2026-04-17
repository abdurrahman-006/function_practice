#include<stdio.h>

char calculate_grade(int marks){
    if(80 <= marks && marks <= 100){
        return 'A';
    }
    else if(70 <= marks && marks <= 79){
        return 'B';
    }
    else if(60 <= marks && marks <= 69){
        return 'C';
    }
    else if(50 <= marks && marks <= 59){
        return 'D';
    }
    else if(40 <= marks && marks <= 49){
        return 'E';
    }
    else if(0 <= marks && marks <= 39){
        return 'F';
    }
    else{
        return 'I';
    }
}
int main(){
    int marks1;
    printf("input your marks: ");
    scanf("%d", &marks1);

    printf("your grade is: %c", calculate_grade(marks1));
    return 0;
}