#include "main.h"
/**
 * _strlen - returns the length of a string
 * @c: the string whose length to check
 * Return: integer length of string
 */
int _strlen(char *c)
{
	int n = 0;

	if (!c)
		return (0);
	while (*c++)
		n++;
	return (n);
}
/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: text to write
 * Return: 1 on success 0 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (len)
		bytes = write(fd, text_conent, len);
	close(fd);
	return (bytes == len ? 1 : -1);
}
