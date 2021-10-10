#include <stdio.h>

char case_up(char c)
{
    if (c>='a'&& c<='z')
        return c - ('a'-'A');
    else
        return c;
}



int main()
{
    
    char letter;
    
    printf("Please, enter the case\n\r");
    
    scanf("%c", &letter);
        
    char output = printf("The entered letter is %c\n", case_up(letter));          
    printf("Testing the return func of main");
    return output;
    

    
    
    
    
    
}