/**
 * _strcmp - a function that compares two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: -1, 0 or 1 if s1 is less than,
 * equal to or greater than s2 respectively
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	/*
	 * loop only end when it gets to the end of
	 * either s1 or s2
	 */
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	/*
	 * whichever strings end first is less,
	 * if they both ends together then, they're
	 * equal
	 */
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	else if (s2[i] == '\0')
		return (1);
	else
		return (-1);
}
