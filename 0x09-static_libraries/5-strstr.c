/**
 * _strstr - a function that locates a substring
 *
 * @haystack: the string in which the substring
 * is located or not
 * @needle: the sunbstring to be located
 *
 * Return: a pointer to the beginning of the located
 * substring, or NULL if it is not located
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return ('\0');
}
