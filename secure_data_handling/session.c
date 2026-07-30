
#include <stdlib.h>
#include <string.h>
#include "session.h"

session_t *session_create(const char *id, unsigned int uid, const unsigned char *data, size_t data_len)
{
	session_t *s;
	size_t id_len;

	s = (session_t *)malloc(sizeof(*s));
	if (!s)
		return NULL;

	/* Initialisation sûre des champs */
	s->id = NULL;
	s->data = NULL;
	s->data_len = 0;
	s->uid = uid;

	/* Copie autonome de l'id si fourni */
	if (id) {
		id_len = strlen(id) + 1;
		s->id = (char *)malloc(id_len);
		if (!s->id) {
			free(s);
			return NULL;
		}
		memcpy(s->id, id, id_len);
	}

	/* Copie autonome des données si présentes */
	if (data && data_len > 0) {
		s->data = (unsigned char *)malloc(data_len);
		if (!s->data) {
			free(s->id);
			free(s);
			return NULL;
		}
		memcpy(s->data, data, data_len);
		s->data_len = data_len;
	}

	return s;
}

int session_set_data(session_t *s, const unsigned char *data, size_t data_len)
{
	unsigned char *tmp;

	if (!s)
		return 0;

	/* Cas data vide : on libère et remet à zéro */
	if (!data || data_len == 0) {
		free(s->data);
		s->data = NULL;
		s->data_len = 0;
		return 1;
	}

	/* Reallocation sûre des données */
	tmp = (unsigned char *)realloc(s->data, data_len);
	if (!tmp) {
		/* On ne modifie pas s->data si realloc échoue */
		return 0;
	}

	s->data = tmp;
	memcpy(s->data, data, data_len);
	s->data_len = data_len;

	return 1;
}

void session_destroy(session_t *s)
{
	if (!s)
		return;

	/* On libère uniquement ce que la session a alloué */
	free(s->id);
	free(s->data);
	free(s);
}
