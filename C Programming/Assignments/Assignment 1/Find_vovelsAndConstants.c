// This code is to fined the character entered is vovel or the constant 

#include<stdio.h>

void main(){

    char ch ;
    printf("Enter your character:");
    scanf("%c",&ch);

    if(ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u'||ch == 'A'||ch == 'E'||ch == 'I'||ch == 'O'||ch == 'U'){
        printf("The entered character is vovel...");
    }else{
        printf("The entered character is constant...");
    }

    return;



}
