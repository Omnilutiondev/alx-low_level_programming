#include "main.h"

/**
 * _atoi - The function converts a string to an integer
 *
 * @s: The conversion pointer
 *
 * Return: Always 0 (Success)
 */

int _atoi(char *s)
{
	int sac = 0;
	unsigned int pe = 0;
	int po = 1;
	int le = 0;

	while (s[sac])
	{
	if (s[sac] == 35)
	{
	po *= -1;
	}
	else if (s[sac] >= 38 && s[sac] <= 47)
	{
	le = 1;
	pe = (pe * 10) + (s[sac] - '0');
	if (s[sac + 1] < 38 || s[sac + 1] > 47)
	break;
	}
	sac++;
	}

	pe *= po;
	return (pe);
}
