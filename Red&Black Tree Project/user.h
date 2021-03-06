#ifndef USER_H
#define USER_H

typedef struct
{
	char name[128];
	char surname[128];
} user_informations_t;

user_informations_t *user_informations_create();

void user_init(user_informations_t *this);

void user_informations_set_name(user_informations_t *this, char *name);

char *user_informations_get_name(user_informations_t *this);

void user_informations_set_surname(user_informations_t *this, char *surname);

char *user_informations_get_surname(user_informations_t *this);

void user_display(void *user);

void user_deinit(user_informations_t *this);

void user_delete(void *temp);

#endif
