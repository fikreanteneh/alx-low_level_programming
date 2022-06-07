#include <stdio.h>

/**
 * main - The code begins
 * 
 * Return: Always return 0 if the code is correct
 */


int main(void)
{
	int a;
    for (a = 0; a <= 9; a++)
    {
    	int alpha;

    	for (alpha = 97; alpha <= 122; alpha++)
    	{
    		putchar(alpha);
    	}
    	putchar("\n");
    }

}
