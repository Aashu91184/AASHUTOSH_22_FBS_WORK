// This code is to find the number is in upper case or in lower case

#include <stdio.h>

void main()
{

    char ch;
    printf("Enter your character:");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("your character is in uppercase...");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("your character is in Lowercase...");
    }
    else
    {
        printf("you have not entered the character ...");
    }

    return;
    
}