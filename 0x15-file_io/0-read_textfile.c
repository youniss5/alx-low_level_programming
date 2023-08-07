#include "main.h"
/**
 * read_textfile - reads a text file and prints it 
 * @filename: name of the file
 * @letters: letters to read
 * Return: bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t bytes;
char size[READ_BUF_SIZE * 8];

if (!filename | !letters)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
bytes = read(fd, &size[0], letters);
bytes = write(STDOUT_FILENO, &size[0], bytes);
close(fd);
return (bytes);
}
