#include "main.h"
/**
 * print_times_table - print table
 * @n: takes integer as an argument
 */
void print_times_table(int n)
{
int i, j, k ;
   
   if (n > 15 || n < 0)
		  return;
	  for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;
			if (k <= 9)
			{
                printf("%d", k);
                if (j != n)
                {
                    printf("   ,", k);
                }
			}
            else if (k >= 10 && k < 100)
            {
                printf("%d", k);
                if (j != n)
                {
                    printf("  ,", k);
                }
            }
            else
            {
                printf("%d", k);
                if (j != n)
                {
                    printf(" ,", k);
                }
            }
		}
		printf("\n");
    }
}
