#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: -1, 0 or 1 if s1 is less than
 * equal to or greater than s2 respectively
 */
int _strcmp(char *s1, char *s2)
{
	int i, diff;

	i = 0;
	/*
	 * loop only end when it gets to the end of
	 * either s1 or s2
	 */
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		diff = s1[i] - s2[i];
		if (diff)
			return (diff);
		i++;
	}
	/*
	 * whichever strings end first is less,
	 * if they both end together then, they're
	 * equal
	 */
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	else if (s2[i] == '\0')
		return (s2[i]);
	else
		return (s1[i]);
}
