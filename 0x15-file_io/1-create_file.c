#include "main.h"
/**
 * create_file - Function
 *
 * Description: creates a file.
 *
 * @filename: pointer constant of type char
 * @text_content: pointer of type char
 *
 * Return: returns 1 if success and -1 if fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd, length;
	ssize_t written;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";

	/*open create AND write file*/
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (!fd)
		return (-1);
	/*get string length*/
	for (length = 0; text_content[length]; length++)
		;
	written = write(fd, text_content, length);

	if (written == -1)
		return (-1);

	close(fd);

	return (1);
}
