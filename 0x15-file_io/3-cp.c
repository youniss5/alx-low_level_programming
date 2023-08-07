#include "main.h"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
/**
 * main - entry point
 * @ac: arguements count
 * @av: arguements vector
 * Return: 1 (success) or 0 (failure).
 */
int main(int ac, char **av)
{
int f_fd = 0, t_fd = 0;
ssize_t x;
char size[READ_BUF_SIZE];

if (ac != 3)
dprintf(STDERR_FILENO, USAGE), exit(97);
f_fd = open(av[1], O_RDONLY);
if (f_fd == -1)
dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
t_fd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
if (t_fd == -1)
dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
while ((x = read(f_fd, size, READ_BUF_SIZE)) > 0)
if (write(t_fd, size, x) != x)
dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
if (x == -1)
dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
f_fd = close(f_fd);
t_fd = close(t_fd);
if (f_fd)
dprintf(STDERR_FILENO, ERR_NOCLOSE, f_fd), exit(100);
if (t_fd)
dprintf(STDERR_FILENO, ERR_NOCLOSE, f_fd), exit(100);
return (EXIT_SUCCESS);
}
