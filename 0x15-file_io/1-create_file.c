#include "main.h"
/**
 * _strlen - returns the lenght of the string
 * @s: string
 * Return: lenght of the string (int)
 */
int _strlen(char *s)
{
int x = 0;
if (!s)
return (0);
while (*s++)
x++;
return (x);
}
/**
 * create_file - function that creates a file.
 * @filename: file name we want to creat
 * @text_content: text to write
 * Return: 1 (success) and 0 (failure)
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
bytes = write(fd, text_content, len);
close(fd);
return (bytes == len ? 1 : -1);
}
