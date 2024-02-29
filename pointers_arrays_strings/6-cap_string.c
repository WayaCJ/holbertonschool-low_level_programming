#include "main.h"
/**
 *cap_string- lower to upper
 *@str: string
 *Return: st
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
		i++;
		if (str[i - 1] == ' ' || str[i - 1] == ',' ||
			str[i - 1] == ';' || str[i - 1] == '.' ||
			str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
			str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
			str[i - 1] == '}' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
			i == 0)
		str[i] -= 32;
		i++;
	}
	return (str);
}
