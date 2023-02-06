#include "main.h"
/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
int fd, checkw, l = 0;
if (filename == 0)
	return (-1);
fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
if (fd == -1)
	return (-1);
if (text_content)
{
while (text_content[l] != 0)
	l++;
checkw = write(fd, text_content, l);
if (checkw == -1)
	return (-1);
}
close(fd);
return (1);
}
