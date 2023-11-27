#include "main.h"

/**
 *append_text_to_file - appends text at the end of a file
 *@filename: name of the file to append to
 *@text_content: a pointer to the text to append
 *
 *Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, j, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
		{
			length++;
		}
	}

	i = open(filename, O_jRONLY | O_APPEND);
	j = write(i, text_content, length);

	if (i == -1 || j == -1)
	{
		return (-1);
	}

	close(i);

	return (1);
}
