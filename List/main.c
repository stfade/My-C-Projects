#include <stdlib.h>
#include <stdio.h>
#include "list.h"
#include "user.h"

void menu(generic_list_t *);
void wait();

int main(int argc, char const *argv[])
{	
	generic_list_t *list = malloc(sizeof(generic_list_t));
	
	while(1) 
	{
    	menu(list);
    }
	
	return 0;
}

void menu(generic_list_t *list) 
{
    int selected;
    printf("1-Add\n");
    printf("2-List\n");
    printf("3-Search\n");
    printf("4-Delete\n");
    printf("5-Exit\n");
    printf("Please choose an option --> ");
    scanf("%d", &selected);
    
    switch(selected)
    {
    	case 1:
    		system("clear");
    		char _name[128], *name = NULL, _surname[128], *surname = NULL;
    		user_informations_t *user = malloc(sizeof(user_informations_t));
    		
            printf("Enter a name: ");
    		scanf("%s",_name);
    		name = _name;
    		
            printf("Enter a surname: ");
    		scanf("%s",_surname);
    		surname = _surname;
    		
            user_information_set_name((void*)user,(char*)name);
    		user_information_set_surname((void*)user,(char*)surname);
    		generic_list_add_node(list, (void*)user);

    		break;
    	
    	case 2:
    		system("clear");
    		generic_list_display(list);
    		wait();

    		break;
    	case 3:
    	
    	case 4:
    	
    	case 5:
    		printf("Program is End!\n");
            exit(0);

            break;
    }

}
void wait() 
{
    char temp;
    printf("Please press Enter!\n");
    temp = getchar();
    temp = getchar();
    system("clear");
}
	
