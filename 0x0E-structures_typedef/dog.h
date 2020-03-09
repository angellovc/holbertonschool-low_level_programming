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
/**
 *struct dog_t - this is a dog structure
 *@name: dog's name
 *@age: dog's age
 *@owner: owner's dog
 */
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
