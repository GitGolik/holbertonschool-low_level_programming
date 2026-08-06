#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * create_file - crée un fichier et y écrit une chaîne
 * @filename: nom du fichier à créer
 * @text_content: chaîne terminée par '\0' à écrire dans le fichier
 * Return: 1 en cas de succès, -1 en cas d'erreur.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t wr;
	int len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
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
