#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * append_text_to_file - ajoute un texte à la fin d'un fichier
 * @filename: nom du fichier
 * @text_content: chaîne terminée par '\0' à ajouter à la fin
 * Return: 1 en cas de succès, -1 en cas d'erreur.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t wr;
	int len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;

		wr = write(fd, text_content, len);
		if (wr == -1 || wr != len)
		{
			close(fd);
			return (-1);
		}
	}

	if (close(fd) == -1)
		return (-1);

	return (1);
}
