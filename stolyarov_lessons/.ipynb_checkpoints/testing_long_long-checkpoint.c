#include <stdio.h>

int main()
{
    //long long number = 999999999999;
    /*printf("%ld\n", sizeof(char));
    printf("%ld\n", sizeof(short));
    printf("%ld\n", sizeof(int));
    printf("%ld\n", sizeof(long));
    printf("%ld\n", sizeof(long long));
    printf("%c\n", 10);*/
    
    char alphabet = 'a';
    
    while (alphabet != 'A')
    {
        printf("%c\n", alphabet);
            alphabet-=1;
    }
    
    return 0;
}