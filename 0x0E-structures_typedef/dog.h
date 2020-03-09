#ifndef DOG
#define DOG
/**
 *struct dog - this is a dog structure
 *@name: dog's name
 *@age: dog's age
 *@owner: owner's dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
