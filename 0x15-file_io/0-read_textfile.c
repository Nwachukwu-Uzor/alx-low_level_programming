#include "main.h"

/**
 *read_textfile- reads a text file and prints it to the POSIX standard output
 *@filename: name of file to read
 *@letters: the number of letters it should read and print
 *Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_depth;
	ssize_t word_count;
	ssize_t total;

	file_depth = open(filename, O_RDONLY);
	if (file_depth == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	t = read(file_depth, buffer, letters);
	word_count = write(STDOUT_FILENO, buffer, total);

	free(buffer);
	close(file_depth);
	return (word_count);
}
