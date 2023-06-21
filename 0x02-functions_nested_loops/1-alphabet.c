#include "main.h"

/**
 * main - Entry point, prints alphabet in lower case,
 * followed by a new line
 * Return : always 0
 */
void print_alphabet(void)
{
    char letter;
    letter = 'a';
    
    while(letter <= 'z')
    {
        _putchar(letter);
        letter++;
    } 
    _putchar('\n');
}


int main(){
	print_alphabet();
	
	return(0);
}
