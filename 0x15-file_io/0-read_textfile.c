#include "main.h"
/**
 * read_textfile - Function
 *
 * Description: reads a text file and prints it to the POSIX standard output.
 *
 * @filename: constant pointer of type char
 * @letters: parameter of type size_t
 *
 * Return: returns number of letters it could read 0, if not opened
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t read_file, write_file;

	if (filename == NULL)
		return (0);

	/*open file*/
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	/*allocte memory*/
	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);
	/*read, write, close file*/
	read_file = read(fd, buffer, letters);
	write_file = write(STDOUT_FILENO, buffer, read_file);
	close(fd);
	free(buffer);

	return (write_file);
}
