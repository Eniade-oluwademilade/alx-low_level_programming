#include <stdio.h>
/**printing lower and uppercase letters
 * return: 0
 */
int main(void)
{
	char alpha;
	char Alpha;
	
	for(alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}

	for(Alpha = 'A'; Alpha <= 'Z'; Alpha++)
	{
		putchar(Alpha);
	}
	putchar('\n');
	return (0);
}
