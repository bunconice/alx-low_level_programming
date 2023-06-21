#include "main.h"

/**
 * main - Entry point, prints alphabet in lower case,
 * followed by a new line
 * Return : always 0
 */
void print_alphabet(void)
{
    char alphabet;
    alphabet = 'a'
    
    while(alphabet <= 'z'){
        _putchar(alphabet);
        alphabet++;
    } 
    _putchar('\n');
    return (0)
}
