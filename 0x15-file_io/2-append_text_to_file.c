#include "main.h"
/**
 * _strlen - returns lenght of string
 * @c: string
 * Return: length of string
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
 * append_text_to_file - appends text to a file
 * @filename: name of file
 * @text_content: text
 * Return: 1 on success 0 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (len)
		bytes = write(fd, text_content, len);
	close(fd);
	return (bytes == len ? 1 : -1);
}
