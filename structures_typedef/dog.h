#ifndef DOG
#define DOG

/**
 * struct dog - dog class
 * @name: Name of the dog
 * @age: Age of the age
 * @owner: Owner of the dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
