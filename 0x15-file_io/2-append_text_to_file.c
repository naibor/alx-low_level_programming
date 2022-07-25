#include "main.h"
/**
 * append_text_to_file - Function
 *
 * Description: appends text at the end of a file.
 *
 * @filename: pointer contant of type char
 * @text_content: pointer of type char
 *
 * Return: returns 1 if success and -1 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, length, written;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";

	/*open file*/
	fd = open(filename, O_WRONLY | O_APPEND);
	if (!fd)
		return (-1);
	/*get length*/
	for (length = 0; text_content[length]; length++)
		;
	/*write*/
	written = write(fd, text_content, length);
	if (written < 0)
		return (-1);

	return (1);
}
