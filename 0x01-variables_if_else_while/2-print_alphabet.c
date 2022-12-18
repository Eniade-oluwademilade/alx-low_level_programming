#include <stdio.h>
/**printing alphabets
 * return: 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar("%i", alpha);
	}
	putchar("\n");
	return (0);
}
